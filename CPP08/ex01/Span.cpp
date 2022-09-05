#include "Span.hpp"
#include <vector>
#include <algorithm>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span(unsigned int  N)
	:_N(N)
{
}

Span::Span( const Span & src )
{
	this->_N = src._N;
	this->_vector.clear();
	this->_vector = src._vector;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	this->_N = rhs._N;
	this->_vector.clear();
	this->_vector = rhs._vector;
	return *this;
}

//std::ostream &			operator<<( std::ostream & o, Span const & i )
//{
//	for (std::vector<int>::iterator it = this->_vector.begin(); it != this->_vector.end(); ++it)
//		o << "Span["<<it<<"] = " << this->_vector[it];
//	return o;
//}


/*
** --------------------------------- METHODS ----------------------------------
*/
void	Span::addNumber(int n)
{
	if (this->_vector.size() < this->_N)
		this->_vector.push_back(n);
	else
		throw VectorIsFullException();
}

void Span::addNumber(const std::vector<int>::iterator& begin, const std::vector<int>::iterator& end)
{
	int len = std::distance(begin, end);
	if (len + this->_vector.size() > this->_N)
	{
		this->_vector.insert(this->_vector.end(), begin, begin + (this->_N - this->_vector.size()));
		throw VectorIsFullException();
	}
	else
		this->_vector.insert(this->_vector.end(), begin, end);
}

long long int	Span::shortestSpan()
{
	if (this->_vector.size() < 2)
		throw EmptyVectorException();
	size_t  ret = llabs(size_t(this->_vector[1]) - size_t( this->_vector[0]));
	for(unsigned int i = 0; i < this->_N; i++){
		for(unsigned int y = 0; y < this->_N ; y++){
			if (y != i && llabs(size_t(this->_vector[i]) - size_t( this->_vector[y])) < ret)
				ret = llabs(size_t(this->_vector[i]) - size_t( this->_vector[y]));
		}
	}
	return ret;
}

unsigned long int	Span::longestSpan()
{
	if (this->_vector.size() < 2)
		throw EmptyVectorException();
	size_t max = *max_element(this->_vector.begin(), this->_vector.end());
	size_t min = *min_element(this->_vector.begin(), this->_vector.end());
	return ( max - min);
}

void	Span::print()
{
		int i=0;
		for (std::vector<int>::iterator it = this->_vector.begin(); it != this->_vector.end(); ++it)
			std::cout <<BGREEN<< "Span["<<i++<<"] = " <<BPURPLE<<this->_vector[*it]<<std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
