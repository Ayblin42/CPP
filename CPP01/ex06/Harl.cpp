/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 17:33:23 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/03 19:04:56 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{

}

Harl::~Harl(void)
{

}

void Harl::complain( std::string level )
{
	std::string tab[4] = {"DEBUG","INFO","WARNING","ERROR"};
	void (Harl::*f[4])(void) = {&Harl::debug,&Harl::info,&Harl::warning,&Harl::error};
	for(int i=0;i<4;i++)
	{
		if (tab[i] == level)
		{
			(this->*f[i])();
			break ;
		}
		if (i == 4)
			std::cout << "Default Harl complain" <<std::endl;
	}
}

void Harl::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}
