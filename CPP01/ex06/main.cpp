/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 18:09:29 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/13 16:41:01 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	int i = 0;
	if (ac != 2)
		return 0;
	std::string arg = av[1];
	Harl Harl;
	std::string tab[4] = {"DEBUG","INFO","WARNING","ERROR"};
	if (arg != tab[0] && arg != tab[1] && arg != tab[2] && arg != tab[3])
		return (0);
	while (tab[i] != av[1])
			i++;
	switch (i){
		case (0):
			Harl.complain("DEBUG");
		case (1):
			Harl.complain("INFO");
		case (2):
			Harl.complain("WARNING");
		case (3):
			Harl.complain("ERROR");
			break;
		default:
			std::cout << "Default Harl complain" <<std::endl;}
}
