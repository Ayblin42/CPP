/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 08:48:42 by ayblin            #+#    #+#             */
/*   Updated: 2022/09/05 19:20:14 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
#include <stack>

# define BWHITE "\033[1m"
# define BGRAY "\033[1;29m"
# define BBLACK "\033[1;30m"
# define BRED "\033[1;31m"
# define BGREEN "\033[1;32m"
# define BYELLOW "\033[1;33m"
# define BBLUE "\033[1;34m"
# define BPURPLE "\033[1;35m"
# define BCYAN "\033[1;36m"

template< typename T >
class MutantStack : public std::stack<T>
{
    public:

        MutantStack() : std::stack<T>() {};
        MutantStack(const MutantStack& copy) : std::stack<T>(copy){};
        virtual ~MutantStack() {};

        MutantStack &operator=(const MutantStack &op)
        {
            if (this == &op)
                return (*this);
            std::stack<T>::operator=(op);
            return (*this);
        };

        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin() { return (std::stack<T>::c.begin()); }
        iterator end() { return (std::stack<T>::c.end()); }

        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        const_iterator begin() const { return (std::stack<T>::c.begin()); }
        const_iterator end() const { return (std::stack<T>::c.end()); }

        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
        reverse_iterator rbegin() { return (std::stack<T>::c.rbegin()); }
        reverse_iterator rend() { return (std::stack<T>::c.rend()); }

        typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
        const_reverse_iterator rbegin() const { return (std::stack<T>::c.rbegin()); }
        const_reverse_iterator rend() const { return (std::stack<T>::c.rend()); }
};

# endif
