/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 01:11:52 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/31 12:26:42 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScalarConversion.hpp"
#include <float.h>
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScalarConversion::ScalarConversion(std::string &argv)
	: _argv(argv)
{
	if (argv.empty())
		throw ScalarConversion::InvalidInput();
	else if (argv.size() == 1)
	{
		if (isdigit(argv.front()))
		{
			this->_intvalue = static_cast<int>(strtol(argv.c_str(), NULL, 10));
			this->_type = intType;
		}
		else
		{
			this->_charvalue = argv.front();
			this->_type = charType;
		}
	}
	else
	{
		char *longEndptr;
		char *doubleEndptr;
		long longArg = strtol(argv.c_str(), &longEndptr, 10);
		double doubleArg = strtof(argv.c_str(), &doubleEndptr);
		if (*longEndptr)
		{
			if(*doubleEndptr){
				if(*doubleEndptr == 'f'){
					this->_floatvalue= static_cast<float>(doubleArg);
					this->_type = floatType;}
				else
					throw ScalarConversion::InvalidInput();
			}
			else{
				this->_doublevalue = doubleArg;
				this->_type = doubleType;
			}
		}
		else{
			this->_intvalue = static_cast<int>(longArg);
			this->_type = intType;
		}
	}
	this->_safe = std::stold(argv.c_str());
}

// ScalarConversion::ScalarConversion( const ScalarConversion & src )
// {
// 	this->_argv = src._argv;
// 	this->_intvalue = src._intvalue;
// 	this->_charvalue = src._charvalue;
// 	this->_doublevalue = src._doublevalue;
// 	this->_floatvalue = src._floatvalue;
// }


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScalarConversion::~ScalarConversion()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

std::ostream &			operator<<( std::ostream & o, ScalarConversion const & i )
{
	o <<BGREEN<< "Char = ";
	try{char c; c =i.ConvertToChar();o<<BYELLOW<<c;}
	catch(const std::exception& e){o << BRED<<e.what()<<BWHITE;}
	std::cout<< std::endl;

	o <<BGREEN<< "INT = ";
	try{int nb ; nb = i.ConvertToInt() ; o<<BYELLOW<<nb ;}
	catch(const std::exception& e){o << BRED<<e.what()<<BWHITE;}
	std::cout<< std::endl;

	o <<BGREEN<< "DOUBLE = ";
	try{
		double nb;
		nb = i.ConvertToDouble();
		double intPart;
		if (modf(nb, &intPart) == 0)
			o.precision(1);
		o<<std::fixed<<BYELLOW<<nb ;
		}
	catch(const std::exception& e){o << BRED<<e.what()<<BWHITE;}
	std::cout<< std::endl;

	o <<BGREEN<< "FLOAT = ";
	try{
		float nb ;
		nb = i.ConvertToFloat() ;
		double intPart;
		if (modf(nb, &intPart) == 0)
			o.precision(1);
		o<<std::fixed<<BYELLOW<<nb<<'f' ;
		}
	catch(const std::exception& e){o << BRED<<e.what()<<BWHITE;}

	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
char		ScalarConversion::ConvertToChar() const
{
	if ( this->_safe > 256 || this->_safe < 0)
		throw ScalarConversion::ImpossibleExeption();
	char c;
	switch (this->_type)
	{
		case(charType):
			return this->_charvalue;
		case(intType):
			c = static_cast<char>(this->_intvalue);
			if (isprint(c))
				return c;
			else
				throw ScalarConversion::NonDisplayableExeption();
		case(floatType):
				c = static_cast<char>(this->_floatvalue);
				if (isprint(c))
					return c;
				else
					throw ScalarConversion::NonDisplayableExeption();
		case(doubleType):
				c = static_cast<char>(this->_doublevalue);
				if (isprint(c))
					return c;
				else
					throw ScalarConversion::NonDisplayableExeption();
	}
}

int			ScalarConversion::ConvertToInt() const
{
	if ( this->_safe > std::numeric_limits<int>::max()|| this->_safe < std::numeric_limits<int>::min())
		throw ScalarConversion::ImpossibleExeption();
	switch (this->_type)
	{
		case(charType):
			return static_cast<int>(this->_charvalue);
		case(intType):
			return this->_intvalue;
		case(floatType):
			if (this->_floatvalue > static_cast<float>(2147483647)|| this->_floatvalue < static_cast<float>(-2147483648))
				throw ScalarConversion::ImpossibleExeption();
			else
				return static_cast<int>(this->_floatvalue);
		case(doubleType):
			if (this->_doublevalue > static_cast<float>(2147483647)|| this->_doublevalue < static_cast<float>(-2147483648))
				throw ScalarConversion::ImpossibleExeption();
			else
				return static_cast<int>(this->_doublevalue);
	}
}

double		ScalarConversion::ConvertToDouble() const
{
		if ( this->_safe >  DBL_MAX|| this->_safe < DBL_MIN)
		throw ScalarConversion::ImpossibleExeption();
	switch (this->_type)
	{
		case(charType):
			return static_cast<double>(this->_charvalue);
		case(intType):
			return static_cast<double>(this->_intvalue);
		case(floatType):
			return static_cast<double>(this->_floatvalue);
		case(doubleType):
			return this->_doublevalue;
	}
}


float		ScalarConversion::ConvertToFloat() const
{

	if ( this->_safe >  std::numeric_limits<float>::max() || this->_safe < std::numeric_limits<float>::min())
		throw ScalarConversion::ImpossibleExeption();
	switch (this->_type)
	{
		case(charType):
			return static_cast<float>(this->_charvalue);
		case(intType):
			return static_cast<float>(this->_intvalue);
		case(floatType):
			return this->_floatvalue;
		case(doubleType):
			return static_cast<float>(this->_doublevalue);
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
