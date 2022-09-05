/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 15:38:56 by ayblin            #+#    #+#             */
/*   Updated: 2022/09/02 06:46:20 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	try
	{
		Array <int> numbers(5);
		numbers[0]  = 0;
		numbers[1]  = 1;
		numbers[2]  = 2;
		numbers[3]  = 3;
		numbers[4]  = 4;

		Array <std::string> text(5);
		text[0]  = "salut";
		text[1]  = "ca";
		text[2]  = "va";
		text[3]  = "bien";
		text[4]  = "?";

		std::cout<<std::endl;
		numbers.print();
		std::cout<<std::endl;
		text.print();
		std::cout<<std::endl<<BCYAN<<"OPERATOR = :"<<std::endl<<std::endl;

		Array <std::string> textCopyOperator;
		textCopyOperator = text;
		textCopyOperator.print();
		std::cout<<std::endl<<BCYAN<<"COPY CONSTRUCTOR :"<<std::endl<<std::endl;

		Array <int> numbersCopyConstructor(numbers);
		numbersCopyConstructor.print();
		std::cout<<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}
