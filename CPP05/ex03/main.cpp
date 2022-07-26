/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 21:27:02 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/31 11:44:02 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat Damien("Damien", 4);
	Intern someRandomIntern;
	Form* rrf;
	try
	{
	rrf = someRandomIntern.makeForm("presidential pardon", "Trouduc");
	Damien.signForm(*rrf);
	rrf->execute(Damien);
	}
	catch(std::exception & e)
	{
		std::cerr <<RED<< "Cannot initialize test because " << e.what() <<NRM<< std::endl;
	}
}
