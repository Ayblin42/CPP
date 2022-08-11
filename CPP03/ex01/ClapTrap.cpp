/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:22:28 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/11 15:13:21 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


/* ************************************************************************** */
/*                              CONSTRUCTOR / DESTRUCTOR                      */
/* ************************************************************************** */
ClapTrap::ClapTrap()
	:_Name("default"), _Pdv(10), _Mana(10), _AD(0)
{
	std::cout << "ClapTrap " << this->_Name << " Default Constructor is called" << NRM<<std::endl;
}

ClapTrap::ClapTrap(std::string name)
	:_Name(name), _Pdv(10), _Mana(10), _AD(0)
{
	std::cout << "ClapTrap " << this->_Name << " Named Constructor is called" << NRM<<std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_Name << " Default Destructor is called" << NRM<<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) // Constructeur de recopie
{
	std::cout << "ClapTrap " << this->_Name << " Copy Constructor is called" << NRM<<std::endl;
	*this = other;
}

/* ************************************************************************** */
/*                                OPERATOR                                    */
/* ************************************************************************** */

ClapTrap  &ClapTrap::operator=(const ClapTrap	&rhs) // Operator d’affectation
{
	std::cout << "Asignement Operator called" << NRM<<std::endl;
	this->_Name	= rhs.get_Name();
	this->_Pdv	= rhs.get_Pdv();
	this->_Mana	= rhs.get_Mana();
	this->_AD	= rhs.get_AD();
	return *this;
}

/* ************************************************************************** */
/*                                  getTER / setTER                           */
/* ************************************************************************** */
std::string ClapTrap::get_Name() const {
	return this->_Name;
}

void ClapTrap::set_Name(std::string _Name) {
	this->_Name = _Name;
}

int ClapTrap::get_Pdv() const {
	return this->_Pdv;
}

void ClapTrap::set_Pdv(int _Pdv) {
	this->_Pdv = _Pdv;
}

int ClapTrap::get_Mana() const {
	return this->_Mana;
}

void ClapTrap::set_Mana(int _Mana) {
	this->_Mana = _Mana;
}

int ClapTrap::get_AD() const {
	return this->_AD;
}

void ClapTrap::set_AD(int _AD) {
	this->_AD = _AD;
}


/* ************************************************************************** */
/*                               FUNCTIONS                                    */
/* ************************************************************************** */

void ClapTrap::attack(const std::string& target){
	if(this->_Pdv <= 0){
		std::cout<<this->_Name<<" ne peux pas attaquer car il est mort"<<NRM<<std::endl;
	}
	else if(this->_Mana <= 0){
		std::cout<<this->_Name<<" n 'a plus assez d'energie pour attaquer"<<NRM<<std::endl;
	}
	else{
		std::cout<<this->_Name<< " attacks " << target <<", causing "<< this->_AD<<" points of damage!" << NRM<<std::endl;
		this->_Mana--;
	}
}

void ClapTrap::beRepaired(unsigned int amount){
	if(this->_Pdv <= 0){
		std::cout<<this->_Name<<"ne peux se reparer car il est mort"<<NRM<<std::endl;
	}
	else if(this->_Mana <= 0){
		std::cout<<this->_Name<<"n 'a plus assez d'energie pour se reparer"<<NRM<<std::endl;
	}
	else{
		std::cout<<this->_Name<< "se repare de " << amount <<" Point de vie"<< NRM<<std::endl;
		this->_Pdv += amount;
		this->_Mana--;
	}
}

void ClapTrap::takeDamage(unsigned int amount){
	if(this->_Pdv <= 0){
		std::cout<<this->_Name<<"Est deja mort"<<NRM<<std::endl;
	}
	else if(amount >= this->_Pdv){
		std::cout<< this->_Name<<" prend "<< amount <<" Damage and die ."<<NRM<<std::endl;
		this->_Pdv = 0;
	}
	else{
		this->_Pdv -= amount;
		std::cout<< this->_Name<<" prend "<< amount <<" Damage ,PDV restant :"<<this->_Pdv<<NRM<<std::endl;
	}
}
