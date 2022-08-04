/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 18:09:29 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/03 19:26:07 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl Harl;

	std::cout << "DEBUG: " << std::endl;
	Harl.complain("DEBUG");
	std::cout << "INFO: " << std::endl;
	Harl.complain("INFO");
	std::cout << "WARNING: " << std::endl;
	Harl.complain("WARNING");
	std::cout << "ERROR: " << std::endl;
	Harl.complain("ERROR");
}
