/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 01:28:24 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/25 03:20:10 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat()
	:  _echelon(150) , _name("default bureaucrat")
{
}

Bureaucrat::Bureaucrat(std::string const name, unsigned int echelon)
	: _name(name)
{
	if (echelon > 150)
		throw Bureaucrat::GradeTooHighException();
	else if (echelon < 1)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_echelon = echelon;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &	Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs._name;
		this->_echelon = rhs._echelon;
	}
	return *this;
}

std::ostream &	operator<<(std::ostream   &o, Bureaucrat const   &rhs)
{
	o << rhs.getname()<< " est echelon " << rhs.getEchelon()<<" .";
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void Bureaucrat::promotion()
{
	if (this->_echelon < 2)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_echelon--;
}

void Bureaucrat::retrogradation()
{
	if (this->_echelon > 149)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_echelon++;
}

void Bureaucrat::signForm(Form& form) const
{
	try
	{
		form.beSigned(*this);
		std::cout <<YEL<< this->getname() <<GRN<< " signed " <<YEL<< form.getname() <<NRM<<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << YEL<<this->getname() <<GRN<< " cannot sign " <<YEL<< form.getname() <<GRN<< " because " <<YEL<< e.what() << NRM<<std::endl;
	}
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const Bureaucrat::getname() const
{
	return this->_name;
}

unsigned int Bureaucrat::getEchelon() const
{
	return this->_echelon;
}

/* ************************************************************************** */
