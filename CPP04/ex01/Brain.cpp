/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 19:05:14 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/16 23:08:01 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "default ideas";
	std::cout << " BRAIN Default Constructor is called" <<std::endl;
}

Brain::~Brain()
{
	std::cout <<this->_type << " BRAIN Destructor is called" <<std::endl;
}

Brain::Brain(const Brain &other) // Constructeur de recopie
{
	*this = other;
	std::cout << this->_type << " BRAIN Copy Constructor is called" <<std::endl;
}

Brain  &Brain::operator=(const Brain	&rhs) // Operator d’affectation
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = rhs._ideas[i];
	return *this;
}

void	Brain::setIdeas(std::string ideas, int index)
{
	this->_ideas[index] = ideas;
}

std::string	Brain::getIdeas(int index)
{
	return this->_ideas[index];
}
