/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 13:26:07 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/16 14:13:22 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>

class WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal(std::string name);
	~WrongAnimal();
	WrongAnimal (const WrongAnimal&other);
	WrongAnimal &operator=(const WrongAnimal&rhs);

	std::string getType() const;
	void makeSound() const;
protected:
	std::string _type;

};

#endif
