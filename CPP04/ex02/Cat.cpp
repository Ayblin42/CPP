/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 13:26:36 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/16 23:05:53 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
	:Animal("Default Cat") , _brain(new Brain())
{
	std::cout << this->_type << " Default Constructor is called" <<std::endl;
}

Cat::Cat(std::string name)
	:Animal(name) , _brain(new Brain())
{
	std::cout << this->_type << " Named Constructor is called" <<std::endl;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << this->_type << " Destructor is called" <<std::endl;
}

Cat::Cat(const Cat &other) // Constructeur de recopie
	:Animal(other)
{
	this->_brain = other._brain;
	std::cout << this->_type << " Copy Constructor is called" <<std::endl;
}

Cat  &Cat::operator=(const Cat	&rhs) // Operator d’affectation
{
	this->_type = rhs._type;
	for(int i = 0; i < 100; i++)
		this->_brain->setIdeas(rhs._brain->getIdeas(i),i);
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "MIAOU MIAOU" << std::endl;
}
