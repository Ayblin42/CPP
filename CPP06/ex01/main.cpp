/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 10:42:36 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/31 11:01:50 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# define BGREEN "\033[1;32m"
# define BYELLOW "\033[1;33m"
# define BCYAN "\033[1;36m"
#include "data.hpp"

int	main()
{
	Data data;

	data.Name = "aymeric";
	data.vaccinated = true;
	data.age = 23;
	data.money = 99995;


	std::cout<<BGREEN<<"Name:"<<BYELLOW <<data.Name <<std::endl;
	std::cout<<BGREEN<<"vaccine:"<<BYELLOW <<data.vaccinated<<std::endl;
	std::cout<<BGREEN<<"Age:"<<BYELLOW <<data.age<<std::endl;
	std::cout<<BGREEN<<"Money:"<<BYELLOW <<data.money<<std::endl<<std::endl;

	std::cout<<BCYAN<<"REINTERPRETATION"<<std::endl<<std::endl;

	uintptr_t rawdata = serialize(&data);
	Data *newdata = deserialize(rawdata);



	std::cout<<BGREEN<<"Name:"<<BYELLOW <<newdata->Name <<std::endl;
	std::cout<<BGREEN<<"vaccine:"<<BYELLOW <<newdata->vaccinated<<std::endl;
	std::cout<<BGREEN<<"Age:"<<BYELLOW <<newdata->age<<std::endl;
	std::cout<<BGREEN<<"Money:"<<BYELLOW <<newdata->money<<std::endl;
}
