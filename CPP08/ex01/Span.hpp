#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
#include <vector>
# define BWHITE "\033[1m"
# define BGRAY "\033[1;29m"
# define BBLACK "\033[1;30m"
# define BRED "\033[1;31m"
# define BGREEN "\033[1;32m"
# define BYELLOW "\033[1;33m"
# define BBLUE "\033[1;34m"
# define BPURPLE "\033[1;35m"
# define BCYAN "\033[1;36m"

class Span
{

	public:

		Span(unsigned int  N);
		Span( Span const & src );
		~Span();

		Span &		operator=( Span const & rhs );

		void				addNumber(int n);
		void 				addNumber(const std::vector<int>::iterator& begin, const std::vector<int>::iterator& end);
		long long int		shortestSpan();
		unsigned long int	longestSpan();
		void				print();

		class  VectorIsFullException : public std::exception
		{
		public:
			const char* what() const throw()
			{
				return ("VectorIsFullException");
			}
		};
		class  EmptyVectorException : public std::exception
		{
		public:
			const char* what() const throw()
			{
				return ("Vector need min 2 value");
			}
		};
	private:

		unsigned int _N;
		std::vector<int>	_vector;
};

std::ostream &			operator<<( std::ostream & o, Span const & i );

#endif /* ************************************************************ SPAN_H */
