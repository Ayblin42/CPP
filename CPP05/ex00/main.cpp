/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 21:27:02 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/24 01:56:21 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat Julie("Julie", 2);
	Bureaucrat Damien("Damien", 149);

	try
	{
		std::cout << Julie << std::endl;
		std::cout << Damien << std::endl;

		Julie.promotion();
		Damien.retrogradation();
		std::cout << Julie << std::endl;
		std::cout << Damien << std::endl;

		Julie.promotion();
		Damien.retrogradation();
		std::cout << Julie << std::endl;
		std::cout << Damien << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
