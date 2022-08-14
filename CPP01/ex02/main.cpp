/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 12:12:38 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/14 13:25:07 by ayblin           ###   ########.fr       */
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

	std::cout << &str <<std::endl;
	std::cout << stringPTR <<std::endl;
	std::cout << &stringREF <<std::endl;

	std::cout << str <<std::endl;
	std::cout << *stringPTR <<std::endl;
	std::cout << stringREF <<std::endl;
}
