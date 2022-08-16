/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 13:26:12 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/16 14:18:36 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
	:_type("Default WrongAnimal")
{
	std::cout << this->_type << " Default Constructor is called" <<std::endl;
}

WrongAnimal::WrongAnimal(std::string name)
	:_type(name)
{
	std::cout << this->_type << " Named Constructor is called" <<std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << this->_type << " Destructor is called" <<std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) // Constructeur de recopie
{
	*this = other;
	std::cout << this->_type << " Copy Constructor is called" <<std::endl;
}

WrongAnimal  &WrongAnimal::operator=(const WrongAnimal	&rhs) // Operator d’affectation
{
	this->_type = rhs._type;
	return *this;
}

std::string WrongAnimal::getType() const
{
	return this->_type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Default WrongAnimal sound" << std::endl;
}
