/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 05:36:04 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/25 06:50:52 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
/*
**  ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm()
	: Form("default ROBOTOMY Formulaire","default target" ,72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& name,const std::string& target)
	: Form(name,target, 72, 45)
{

}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src )
	: Form(src)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}


/*** --------------------------------- OVERLOAD ---------------------------------*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	this->Form::operator=(rhs);
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if(this->_signed == true)
	{
		if (this->_EchelonToExec < executor.getEchelon())
			throw Form::GradeTooLowException();
		else{
			std::cout<<GRN<<"ZZzzZZZZzzVRRZrzRRZrRzrRZRRZZZZZzzzZ(bruit de perceuse)"<<NRM<<std::endl;
			srand(time(0));
			int nb = rand();
			// std::cout<<RED<<nb<<std::endl;
			if ((nb % 2))
				std::cout<<BYELLOW<<this->_target <<GRN<<" a ete robotomisee"<<NRM<<std::endl;
			else
				std::cout<<GRN<<"l'operation a echoue"<<std::endl;
		}
	}
	else
		throw Form::NotSigned();

}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
