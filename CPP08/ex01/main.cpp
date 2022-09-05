/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 16:52:07 by ayblin            #+#    #+#             */
/*   Updated: 2022/09/03 20:14:05 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try
	{
		Span sp = Span(5);
		sp.addNumber(-2147483648);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(2147483647);
		sp.addNumber(11);
		std::cout <<BGREEN<<"Shortest = "<<BPURPLE<< sp.shortestSpan() << std::endl;
		std::cout <<BGREEN<<"Longest = "<<BPURPLE<<sp.longestSpan() << std::endl;

		Span test2 = Span(100);
		std::vector<int> v(15,1);
		test2.addNumber(v.begin(), v.end());
		test2.print();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout<<BCYAN<<"-----ERROR TEST-----"<<std::endl;

	try
	{
		std::vector<int> v(15,1);
		Span testoverflow = Span(10);
		testoverflow.addNumber(v.begin(), v.end());
	}
	catch(const std::exception& e)
	{
		std::cerr <<BRED<< e.what() << '\n';
	}

	try
	{
		Span testempty= Span(10);
		testempty.addNumber(11);
		testempty.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr <<BRED<< e.what() << '\n';
	}
	return 0;
}
