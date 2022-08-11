/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 13:37:55 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/11 15:13:21 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

/* ************************************************************************** */
/*                              CONSTRUCTOR / DESTRUCTOR                      */
/* ************************************************************************** */

ScavTrap::ScavTrap()
	:ClapTrap()
{
	this->_Pdv = 100;
	this->_Mana = 50;
	this->_AD = 20;
	std::cout << "ScavTrap " << this->_Name << " Constructor is called" << NRM<<std::endl;
}

ScavTrap::ScavTrap(std::string name)
	:ClapTrap(name)
{
	this->_Pdv = 100;
	this->_Mana = 50;
	this->_AD = 20;
	std::cout << "ScavTrap " << this->_Name << " Named Constructor is called" << NRM<<std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_Name << " Destructor is called" << NRM<<std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) // Constructeur de recopie
{
	std::cout << "ScavTrap " << this->_Name << " Copy Constructor is called" << NRM<<std::endl;
	*this = other;
}

/* ************************************************************************** */
/*                                OPERATOR                                    */
/* ************************************************************************** */

ScavTrap  &ScavTrap::operator=(const ScavTrap	&rhs) // Operator d’affectation
{
	std::cout << "ScavTrap " << this->_Name << " Assignement Operator is called" << NRM<<std::endl;
	ClapTrap::operator=(rhs);
	return *this;
}

/* ************************************************************************** */
/*                                  GETTER / SETTER                           */
/* ************************************************************************** */

/* ************************************************************************** */
/*                               FUNCTIONS                                    */
/* ************************************************************************** */


void ScavTrap::attack(const std::string& target){
	if(this->_Pdv <= 0){
		std::cout<<this->_Name<<" ScavTrap ne peux pas attaquer car il est mort"<<NRM<<std::endl;
	}
	else if(this->_Mana <= 0){
		std::cout<<this->_Name<<" ScavTrap n 'a plus assez d'energie pour attaquer"<<NRM<<std::endl;
	}
	else{
		std::cout<<"ScavTrap " <<this->_Name<< " attacks " << target <<", causing "<< this->_AD<<" points of damage!" << NRM<<std::endl;
		this->_Mana--;
	}
}

void	ScavTrap::guardGate() {
	if(this->_Pdv <= 0){
		std::cout<<this->_Name<<"ne peux pas lancer guard mode car il est mort"<<NRM<<std::endl;
	}
	if(this->_Mana <= 0){
		std::cout<<this->_Name<<": Mana insuffisant"<<NRM<<std::endl;
	}
	else{
		this->_Mana--;
		std::cout<< this->_Name<<" Entre en Guard Mode ."<<NRM<<std::endl;
	}
}
