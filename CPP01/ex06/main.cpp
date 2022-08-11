/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 18:09:29 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/11 15:13:21 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	int i = 0;
	if (ac != 2)
		return 0;
	Harl Harl;
	std::string tab[4] = {"DEBUG","INFO","WARNING","ERROR"};

	while (tab[i] != av[1])
			i++;
	switch (i){
		case (1):
			Harl.complain("DEBUG");
		case (2):
			Harl.complain("INFO");
		case (3):
			Harl.complain("WARNING");
		case (4):
			Harl.complain("ERROR");
			break;
		default:
			std::cout << "Default Harl complain" <<NRM<<std::endl;}
}
