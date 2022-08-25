/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 21:27:02 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/25 03:22:24 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat Damien("Damien", 5);
	Form Formulaire("Formulaire A", 6 ,3);
	std::cout << Damien << std::endl;
	std::cout << Formulaire << std::endl;

	//* TEST DE SIGNATURE DE FORMULAIRE
	Damien.signForm(Formulaire);
	Damien.signForm(Formulaire);

	//* TEST DE LA VERIFICATION DINITIALISATION AVEC TRY CATCH
	// try
	// {
	// 	Form test("test", 151, 42);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << "Cannot initialize test because " << e.what() << std::endl;
	// }

}
