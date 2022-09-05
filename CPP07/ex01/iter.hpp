/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 11:29:21 by ayblin            #+#    #+#             */
/*   Updated: 2022/09/01 14:05:05 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>

void iter(T* array, size_t length, void (*f)(const T&))
{
	for (size_t i = 0; i < length; i++)
		(*f)(array[i]);
}

template <typename T>
void print(T const & x)
{
	std::cout<<x<<std::endl;
}
