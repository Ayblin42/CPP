/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 08:45:40 by ayblin            #+#    #+#             */
/*   Updated: 2022/09/05 19:36:59 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MutantStack.hpp"
#include <list>

int main()
{
	std::cout <<std::endl<<BPURPLE<<"------MUTANT STACK-----"<<std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout <<BGREEN<< mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	// ++it;
	// --it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	// std::cout <<BPURPLE<<"------COPY CONSTRUCTOR TEST-----"<<std::endl;
	// std::stack<int> s(mstack);
	// while(!s.empty())
	// {
	// 		int w = s.top();
	// 		std::cout << w;
	// 		s.pop();
	// 		std::cout<<std::endl;
	// }



	std::cout <<BPURPLE<<"------BASIC LIST CONTAINER-----"<<std::endl;
	std::list<int> list;
	list.push_back(5);
	list.push_back(17);
	std::cout <<BGREEN<< list.back() << std::endl;
	list.pop_back();
	std::cout << list.size() << std::endl;
	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	//[...]
	list.push_back(0);
	std::list<int>::iterator it2 = list.begin();
	std::list<int>::iterator ite2 = list.end();
	++it2;
	--it2;
	while (it2 != ite2)
	{
	std::cout << *it2 << std::endl;
	++it2;
	}
	(void)it2;
	(void)ite2;

	std::list<int> s2(list);
	return 0;
}
