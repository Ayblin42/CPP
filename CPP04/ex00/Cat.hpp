/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 13:25:49 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/16 14:13:40 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(std::string name);
	~Cat();
	Cat (const Cat&other);
	Cat &operator=(const Cat&rhs);

	void makeSound() const;
};

#endif
