/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 21:27:02 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/25 07:10:46 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat Damien("Damien", 4);
	ShrubberyCreationForm FormulaireArbre("FormulaireArbre", "target");
	PresidentialPardonForm FormulairePres("FormulaireArbre", "target");
	RobotomyRequestForm FormulairePerceuse("Percecuse", "target");
	std::cout << Damien << std::endl;

	//* TEST DE SIGNATURE DE FORMULAIRE
	Damien.signForm(FormulaireArbre);
	Damien.signForm(FormulairePerceuse);
	Damien.signForm(FormulairePres);
	try{
	FormulaireArbre.execute(Damien);
	FormulairePerceuse.execute(Damien);
	FormulairePres.execute(Damien);
	}
	catch(const std::exception& e)
	{
		std::cerr <<RED<< "Cannot initialize test because " << e.what() <<NRM<< std::endl;
	}
	Damien.executeForm(FormulairePerceuse);
}
