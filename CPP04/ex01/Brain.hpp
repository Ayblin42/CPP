/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 19:05:17 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/16 23:02:20 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef Brain_H
#define Brain_H

#include <iostream>
#include "Animal.hpp"

class Brain : public Animal
{
public:
	Brain();
	~Brain();
	Brain (const Brain&other);
	Brain &operator=(const Brain&rhs);

	void	setIdeas(std::string ideas, int index);
	std::string	getIdeas(int index);
private:
	std::string _ideas[100];

};

#endif
