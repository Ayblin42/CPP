/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 13:26:19 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/16 23:06:22 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
	:Animal("Default Dog") , _brain(new Brain())
{
	std::cout << this->_type << " Default Constructor is called" <<std::endl;
}

Dog::Dog(std::string name)
	:Animal(name) , _brain(new Brain())
{
	std::cout << this->_type << " Named Constructor is called" <<std::endl;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << this->_type << " Destructor is called" <<std::endl;
}

Dog::Dog(const Dog &other)
	: Animal(other) // Constructeur de recopie
{
	this->_brain = other._brain;
	std::cout << this->_type << " Copy Constructor is called" <<std::endl;
}

Dog  &Dog::operator=(const Dog	&rhs)
{
	this->_type = rhs._type;
	for(int i = 0; i < 100; i++)
		this->_brain->setIdeas(rhs._brain->getIdeas(i),i);
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "WOAFF WOAFF" << std::endl;
}
