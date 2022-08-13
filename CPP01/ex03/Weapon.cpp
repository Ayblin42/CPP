/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 12:52:17 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/04 15:08:52 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) :
	type(type)
{

}

Weapon::~Weapon()
{

}

std::string	&Weapon::getType()
{
	return ( this->type);
}

void	Weapon::setType(std::string str)
{
	this->type = str;
}
