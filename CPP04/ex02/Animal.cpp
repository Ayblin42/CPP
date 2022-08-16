/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 13:26:12 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/16 14:18:36 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
	:_type("Default Animal")
{
	std::cout << this->_type << " Default Constructor is called" <<std::endl;
}

Animal::Animal(std::string name)
	:_type(name)
{
	std::cout << this->_type << " Named Constructor is called" <<std::endl;
}

Animal::~Animal()
{
	std::cout << this->_type << " Destructor is called" <<std::endl;
}

Animal::Animal(const Animal &other) // Constructeur de recopie
{
	*this = other;
	std::cout << this->_type << " Copy Constructor is called" <<std::endl;
}

Animal  &Animal::operator=(const Animal	&rhs) // Operator d’affectation
{
	this->_type = rhs._type;
	return *this;
}

std::string Animal::getType() const
{
	return this->_type;
}

void Animal::makeSound() const
{
	std::cout << "Default animal sound" << std::endl;
}
