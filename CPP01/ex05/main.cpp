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

int main()
{
	Harl Harl;

	std::cout << "DEBUG: " << NRM<<std::endl;
	Harl.complain("DEBUG");
	std::cout << "INFO: " << NRM<<std::endl;
	Harl.complain("INFO");
	std::cout << "WARNING: " << NRM<<std::endl;
	Harl.complain("WARNING");
	std::cout << "ERROR: " << NRM<<std::endl;
	Harl.complain("ERROR");
}
