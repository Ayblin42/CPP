/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 06:38:15 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/31 08:22:39 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"

int	main(int ac, char **av)
{
	(void)ac;
	try
	{
		std::string s(av[1]);
		ScalarConversion conv(s);
		std::cout << conv<<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}
