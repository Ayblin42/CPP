/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:28:31 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/17 20:59:00 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_Materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &other) // Constructeur de recopie
{
	*this = other;
}

MateriaSource  &MateriaSource::operator=(const MateriaSource	&rhs)
{
	if (this != &rhs)
	{
		this->~MateriaSource();
		for (int i = 0; i < 4; i++){
			if (rhs._Materia[i])
				this->_Materia[i] = rhs._Materia[i];}
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (this->_Materia[i] != NULL)
			delete this->_Materia[i];
}

void MateriaSource::learnMateria(AMateria* add)
{
	for (int i = 0; i < 4; i++){
		if(this->_Materia[i] == NULL){
			this->_Materia[i] = add;
			break ;}}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_Materia[i] && this->_Materia[i]->getType() == type)
			return this->_Materia[i]->clone();
	}
	return NULL;
}
