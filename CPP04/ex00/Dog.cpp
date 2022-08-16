/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 13:26:19 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/16 14:17:24 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
	:Animal("Default Dog")
{
	std::cout << this->_type << " Default Constructor is called" <<std::endl;
}

Dog::Dog(std::string name)
	:Animal(name)
{
	std::cout << this->_type << " Named Constructor is called" <<std::endl;
}

Dog::~Dog()
{
	std::cout << this->_type << " Destructor is called" <<std::endl;
}

Dog::Dog(const Dog &other) // Constructeur de recopie
{
	*this = other;
	std::cout << this->_type << " Copy Constructor is called" <<std::endl;
}

Dog  &Dog::operator=(const Dog	&rhs) // Operator d’affectation
{
	this->_type = rhs._type;
	return *this;
}


void Dog::makeSound() const
{
	std::cout << "WOAFF WOAFF" << std::endl;
}
