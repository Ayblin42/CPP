/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 17:47:40 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/03 16:22:39 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	if (ac != 4)
		return(std::cout << "  invalid number of arguments"<< std::endl,0);
	std::string filename(av[1]);
	std::string s1(av[2]);
	std::string s2(av[3]);
	std::string line;
	std::size_t found;
	std::ofstream ofs(filename.append(".replace").data());
	std::ifstream ifs("numbers");

	if (!ifs.good())
		return(std::cout << "invalid file name "<< std::endl,0);
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
		ofs << line<< std::endl;
	}
	ifs.close();
	ofs.close();
}
