/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 01:11:57 by ayblin            #+#    #+#             */
/*   Updated: 2022/09/04 11:36:55 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERSION_HPP
# define SCALARCONVERSION_HPP

# include <iostream>
# include <string>
#include <cerrno>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <stddef.h>
#include <limits.h>
#include <limits>
#include <cmath>
#include <ctgmath>

# define BWHITE "\033[1m"
# define BGRAY "\033[1;29m"
# define BBLACK "\033[1;30m"
# define BRED "\033[1;31m"
# define BGREEN "\033[1;32m"
# define BYELLOW "\033[1;33m"
# define BBLUE "\033[1;34m"
# define BPURPLE "\033[1;35m"
# define BCYAN "\033[1;36m"

class ScalarConversion
{

	public:

		ScalarConversion(std::string &argv);
		ScalarConversion( ScalarConversion const & src );
		~ScalarConversion();

		ScalarConversion &		operator=( ScalarConversion const & rhs );

		char		ConvertToChar() const;
		int			ConvertToInt() const;
		double		ConvertToDouble() const;
		float		ConvertToFloat() const;

		class InvalidInput : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return ("Invalid input");
				}
		};
		class ImpossibleExeption : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return ("Impossible");
				}
		};
		class NonDisplayableExeption : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return ("Non Displayable");
				}
		};

	const 	std::string&	_argv;
	double	_doublevalue;
	enum type {charType, intType, floatType, doubleType} _type;
};

std::ostream &			operator<<( std::ostream & o, ScalarConversion const & i );

#endif /* ************************************************ SCALARCONVERSION_H */
