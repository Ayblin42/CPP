/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 13:26:36 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/16 14:17:34 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
	:WrongAnimal("Default WrongCat")
{
	std::cout << this->_type << " Default Constructor is called" <<std::endl;
}

WrongCat::WrongCat(std::string name)
	:WrongAnimal(name)
{
	std::cout << this->_type << " Named Constructor is called" <<std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << this->_type << " Destructor is called" <<std::endl;
}

WrongCat::WrongCat(const WrongCat &other) // Constructeur de recopie
{
	*this = other;
	std::cout << this->_type << " Copy Constructor is called" <<std::endl;
}

WrongCat  &WrongCat::operator=(const WrongCat	&rhs) // Operator d’affectation
{
	this->_type = rhs._type;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "MIAOU MIAOU" << std::endl;
}
