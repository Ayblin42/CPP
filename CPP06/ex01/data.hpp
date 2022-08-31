/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 10:42:39 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/31 10:52:31 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

typedef struct
{
	std::string	Name;
	bool		vaccinated;
	int			age;
	double		money;
} Data;

Data* deserialize(uintptr_t raw);
uintptr_t serialize(Data* ptr);
