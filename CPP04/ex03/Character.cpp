/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:04:57 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/17 21:05:48 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
	: _name("default")
{
	for (int i = 0; i < 4; i++)
		this->_AMateria[i] = NULL;
}

Character::Character(const std::string &name)
	: _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_AMateria[i] = NULL;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (this->_AMateria[i] != NULL)
			delete this->_AMateria[i];
}

Character::Character(const Character &other) // Constructeur de recopie
{
	*this = other;
}

Character  &Character::operator=(const Character	&rhs) // Operator d’affectation
{
	if (this != &rhs)
	{
		this->~Character();
		this->_name = rhs._name;
		for (int i = 0; i < 4; i++){
			if (rhs._AMateria[i])
				this->_AMateria[i] = rhs._AMateria[i];}
	}
	return *this;
}

std::string const  &Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++){
		if(this->_AMateria[i] == NULL){
			this->_AMateria[i] = m;
			break ;}}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
		this->_AMateria[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (this->_AMateria[idx] && idx >= 0 && idx <= 3)
		this->_AMateria[idx]->use(target);
}
