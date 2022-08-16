/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 13:26:36 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/16 14:17:34 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
	:Animal("Default Cat")
{
	std::cout << this->_type << " Default Constructor is called" <<std::endl;
}

Cat::Cat(std::string name)
	:Animal(name)
{
	std::cout << this->_type << " Named Constructor is called" <<std::endl;
}

Cat::~Cat()
{
	std::cout << this->_type << " Destructor is called" <<std::endl;
}

Cat::Cat(const Cat &other) // Constructeur de recopie
{
	*this = other;
	std::cout << this->_type << " Copy Constructor is called" <<std::endl;
}

Cat  &Cat::operator=(const Cat	&rhs) // Operator d’affectation
{
	this->_type = rhs._type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "MIAOU MIAOU" << std::endl;
}
