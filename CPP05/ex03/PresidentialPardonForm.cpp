/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 06:58:47 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/25 07:00:39 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm()
	: Form("default President Formulaire", "default target",25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& name,const std::string& target)
	: Form(name,target, 25, 5)
{

}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src )
	: Form(src)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	this->Form::operator=(rhs);
	return *this;
}



/*
** --------------------------------- METHODS ----------------------------------
*/
void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if(this->_signed == true)
	{
		if (this->_EchelonToExec < executor.getEchelon())
			throw Form::GradeTooLowException();
		else{
			std::cout<<BYELLOW<<this->_target <<GRN<<"a été pardonnée par Zaphod Beeblebrox"<<NRM<<std::endl;
		}
	}
	else
		throw Form::NotSigned();

}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
