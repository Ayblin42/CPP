/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:32:28 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/17 21:06:45 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
	:AMateria("cure")
{

}

Cure::~Cure()
{

}

Cure::Cure(const Cure &other)
	:AMateria(other) // Constructeur de recopie
{
}

Cure  &Cure::operator=(const Cure	&rhs) // Operator d’affectation
{
	this->_type = rhs._type;
	return *this;
}

AMateria* Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter &target)
{
	std::cout<<MAG<<"* heals "<<target.getName()<<"'s wounds *"<<NRM<<std::endl;
}
