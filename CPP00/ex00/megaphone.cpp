/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 03:26:37 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/11 15:13:21 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		for (size_t i = 1; i < (size_t)ac; i++)
			for (size_t j = 0; j < std::strlen(av[i]); j++)
				std::cout << (char)std::toupper(av[i][j]);
		std::cout << NRM<<std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << NRM<<std::endl;
	return (0);
}
