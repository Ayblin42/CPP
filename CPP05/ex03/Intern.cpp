/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 21:38:42 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/26 23:04:47 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/*
** --------------------------------- METHODS ----------------------------------
*/
Form *Intern::makeForm(std::string const & formulaire, std::string const &  target) const
{
	Form *ret = 0;
	std::string formlist[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	for(int i = 0; i<3 && formlist[i] != formulaire ; i++)
	switch (i)
	{
		case 0:
			ret = new ShrubberyCreationForm("default ShrubberyCreationForm",target);
			break;
		case 1:
			ret = new RobotomyRequestForm("default RobotomyRequestForm",target);
			break;
		case 2:
			ret = new PresidentialPardonForm("default PresidentialPardonForm",target);
			break;
		default:
			throw Intern::InvalideFormException();
	}
	std::cout<< "Intern create " << formulaire <<std::endl;
	return ret;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
