/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 17:47:40 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/01 19:00:20 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	std::string filename(av[1]);
	std::string s1(av[2]);
	std::string s2(av[3]);
	std::ifstream ifs("numbers");
	std::string line;
	std::size_t found;

	while(ifs.good())
	{
		std::getline(ifs,line);
		found = line.find(s1, 0);
		while (found != std::string::npos)
		{
			line.erase(found, s1.length());
			line.insert(found, s2);
			found = line.find(s1, found);
		}
		std::cout << line <<std::endl;
		std::cout << std::endl;
	}
}
