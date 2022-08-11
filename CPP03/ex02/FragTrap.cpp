/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 13:37:55 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/11 15:29:49 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

/* ************************************************************************** */
/*                              CONSTRUCTOR / DESTRUCTOR                      */
/* ************************************************************************** */

FragTrap::FragTrap()
	:ClapTrap()
{
	this->_Pdv = 100;
	this->_Mana = 100;
	this->_AD = 30;
	std::cout << BLU << this->_Name << " Constructor is called" << NRM <<std::endl;
}

FragTrap::FragTrap(std::string name)
	:ClapTrap(name)
{
	this->_Pdv = 100;
	this->_Mana = 100;
	this->_AD = 30;
	std::cout << BLU << this->_Name << " Named Constructor is called" << NRM<<std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << BLU << this->_Name << " Destructor is called" << NRM<<std::endl;
}

FragTrap::FragTrap(const FragTrap &other) // Constructeur de recopie
{
	std::cout << BLU << this->_Name << " Copy Constructor is called" << NRM<<std::endl;
	*this = other;
}

/* ************************************************************************** */
/*                                OPERATOR                                    */
/* ************************************************************************** */

FragTrap  &FragTrap::operator=(const FragTrap	&rhs) // Operator d’affectation
{
	std::cout << BLU << this->_Name << " Assignement Operator is called" << NRM<<std::endl;
	ClapTrap::operator=(rhs);
	return *this;
}

/* ************************************************************************** */
/*                                  GETTER / SETTER                           */
/* ************************************************************************** */

/* ************************************************************************** */
/*                               FUNCTIONS                                    */
/* ************************************************************************** */


void FragTrap::attack(const std::string& target){
	if(this->_Pdv <= 0){
		std::cout<<BLU<<this->_Name<<" FragTrap ne peux pas attaquer car il est mort"<<NRM<<std::endl;
	}
	else if(this->_Mana <= 0){
		std::cout<<BLU<<this->_Name<<" FragTrap n 'a plus assez d'energie pour attaquer"<<NRM<<std::endl;
	}
	else{
		std::cout<<BLU <<this->_Name<< " attacks " << target <<", causing "<< this->_AD<<" points of damage!" << NRM<<std::endl;
		this->_Mana--;
	}
}

void FragTrap::highFivesGuys(void){
	if(this->_Pdv <= 0){
		std::cout<<BLU<<this->_Name<<"ne peux pas lancer highFive car il est mort"<<NRM<<std::endl;
	}
	if(this->_Mana <= 0){
		std::cout<<BLU<<this->_Name<<": Mana insuffisant"<<NRM<<std::endl;
	}
	else{
		this->_Mana--;
		std::cout<<BLU<< this->_Name<<" Veux faire un high five ."<<NRM<<std::endl;
	}
}
