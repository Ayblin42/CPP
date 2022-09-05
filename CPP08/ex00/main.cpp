/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 08:02:40 by ayblin            #+#    #+#             */
/*   Updated: 2022/09/02 16:45:49 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

# define BWHITE "\033[1m"
# define BGRAY "\033[1;29m"
# define BBLACK "\033[1;30m"
# define BRED "\033[1;31m"
# define BGREEN "\033[1;32m"
# define BYELLOW "\033[1;33m"
# define BBLUE "\033[1;34m"
# define BPURPLE "\033[1;35m"
# define BCYAN "\033[1;36m"

template <class T>
typename T::iterator easyfind(T & container, int tofind)
{
	typename T::iterator it = std::find(container.begin(),  container.end(), tofind);
	if (it != container.end())
		return it;
	else
		return container.end();
}

int main()
{
	std::list<int> list;
	std::vector<int> vector;
		for (int i = 0; i <= 10; i++){
			vector.push_back(i);
			list.push_back(i);
		}
		std::cout <<BCYAN<< std::endl<<"------------------VECTOR TEST------------------"<< std::endl<< std::endl;
		std::vector<int>::iterator it_vector = easyfind(vector, 8);
		if (it_vector == vector.end())
			std::cout <<BRED<< "Vector value not found ."<< std::endl;
		else
			std::cout <<BGREEN<< std::endl<< "Vector value find :" << *it_vector << std::endl;
		std::cout <<BCYAN<<"------------------LIST TEST------------------"<< std::endl<< std::endl;
		std::list<int>::iterator it_list = easyfind(list, 12);
		if (it_list == list.end())
			std::cout <<BRED<< "list value not found ."<< std::endl;
		else
			std::cout <<BGREEN<< "list value find :" << *it_list << std::endl;

}
