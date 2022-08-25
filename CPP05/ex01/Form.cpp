/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 01:28:09 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/25 03:16:13 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form()
	: _name("default Form name"), _signed(false), _EchelonToSign(1), _EchelonToExec(1)
{
}

Form::Form(const std::string& name, const unsigned int EchelonToSign, const unsigned int EchelonToExec)
	: _name(name), _signed(false), _EchelonToSign(EchelonToSign), _EchelonToExec(EchelonToExec)
{
	if (EchelonToSign < 1 || EchelonToExec < 1)
		throw Form::GradeTooHighException();
	else if (EchelonToSign > 150 || EchelonToExec > 150)
		throw Form::GradeTooLowException();
}

Form::Form( const Form & src )
	: _name(src._name), _signed(false), _EchelonToSign(src._EchelonToSign), _EchelonToExec(src._EchelonToExec)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &	Form::operator=( Form const & rhs )
{
	(void)rhs;
	return *this;
}

std::ostream &	operator<<( std::ostream & o, Form const & rhs )
{
	o <<GRN<< "Formulaire :\n" <<"	Nom		:"<< YEL <<rhs.getname()<<NRM<<std::endl;
	o <<GRN<<"	signer  	:"<<YEL <<rhs.getsigned()<<std::endl;
	o <<GRN<<"	EchelonToSign	:"<<YEL << rhs.getEchelonToSign()<<std::endl;
	o <<GRN<<"	EchelonToExec	:"<<YEL << rhs.getEchelonToExec()<<NRM<<std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Form::beSigned(const Bureaucrat& candidat)
{
	if (this->_signed == false)
	{
		if(candidat.getEchelon() < this->_EchelonToSign)
			this->_signed = true;
		else
			throw Form::GradeTooLowException();
	}
	else
		throw Form::AlreadySigned();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string Form::getname()const{ return this->_name;}
bool Form::getsigned()const{ return this->_signed;}
unsigned int Form::getEchelonToSign()const{ return this->_EchelonToSign;}
unsigned int Form::getEchelonToExec()const{ return this->_EchelonToExec;}



/* ************************************************************************** */
