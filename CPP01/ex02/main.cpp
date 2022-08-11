/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 12:12:38 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/11 15:13:21 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <cstring>
# include <algorithm>
# include <iomanip>
# include <stdlib.h>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << &str <<NRM<<std::endl;
	std::cout << stringPTR <<NRM<<std::endl;
	std::cout << &stringREF <<NRM<<std::endl;

	std::cout << str <<NRM<<std::endl;
	std::cout << *stringPTR <<NRM<<std::endl;
	std::cout << stringREF <<NRM<<std::endl;
}
