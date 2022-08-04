/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 17:07:47 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/03 19:00:10 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

#include <string.h>
#include <iostream>

#define DEBUG		1
#define INFO		2
#define WARNING		3
#define ERROR		4


class Harl
{
public:
	Harl(void);
	~Harl(void);

	void complain( std::string level );

private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
};

#endif
