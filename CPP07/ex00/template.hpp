/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 09:33:08 by ayblin            #+#    #+#             */
/*   Updated: 2022/09/01 11:09:43 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
T const & max(T const & x, T const & y)
{
	return (x>=y ? x : y);
}

template <typename T>
T const & min(T const & x, T const & y)
{
	return (x<=y ? x : y);
}

template <typename T>
void	swap(T  & x, T & y)
{
	T tmp;
	tmp = x;
	x = y;
	y  =  tmp;
}
