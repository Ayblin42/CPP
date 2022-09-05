#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
#include <stack>

template< typename T >
class MutantStack : public std::stack<T>
{
	public:

		MutantStack();
		MutantStack( MutantStack const & src );
		~MutantStack();

		MutantStack &		operator=( MutantStack const & rhs );

	private:
	Container c;
};

std::ostream &			operator<<( std::ostream & o, MutantStack const & i );

#endif /* ***************************************************** MUTANTSTACK_H */
