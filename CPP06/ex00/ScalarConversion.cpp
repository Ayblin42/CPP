/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 01:11:52 by ayblin            #+#    #+#             */
/*   Updated: 2022/09/05 11:47:05 by ayblin           ###   ########.fr       */
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
	this->_doublevalue = strtod(argv.c_str(), NULL);
	this->_type = intType;
}

// ScalarConversion::ScalarConversion( const ScalarConversion & src )
// {
// 	this->_argv = src._argv;
// 	this->_doublevalue = src._doublevalue;
// 	this->_charvalue = src._charvalue;
// 	this->_doublevalue = src._doublevalue;
// 	this->_doublevalue = src._doublevalue;
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
	if(i._argv == "+inf" || i._argv == "+inff" || i._argv == "-inf" || i._argv == "-inff" || i._argv == "nan" || i._argv == "nanf")
	{
		if(i._argv =="+inf"){
			o << "char: impossible" << std::endl;
			o << "int: impossible" << std::endl;
			o << "float: inf " << std::endl;
			o << "double: inf"<< std::endl;}
		if(i._argv =="+inff"){
			o << "char: impossible" << std::endl;
			o << "int: impossible" << std::endl;
			o << "float: inf"  << std::endl;
			o << "double: inf" << std::endl;}
		if(i._argv =="-inf"){
			o << "char: impossible" << std::endl;
			o << "int: impossible" << std::endl;
			o << "float: -inf"  << std::endl;
			o << "double: -inf" << std::endl;}
		if(i._argv =="-inff"){
			o << "char: impossible" << std::endl;
			o << "int: impossible" << std::endl;
			o << "float: -inf"  << std::endl;
			o << "double: -inf" << std::endl;}
		if(i._argv =="nan"){
			o << "char: impossible" << std::endl;
			o << "int: impossible" << std::endl;
			o << "float: nan"  << std::endl;
			o << "double: nan" << std::endl;}
		if(i._argv =="nanf"){
			o << "char: impossible" << std::endl;
			o << "int: impossible" << std::endl;
			o << "float: nan"  << std::endl;
			o << "double: nan" << std::endl;}
		return o;
	}
	else
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
			if (modf(nb, &intPart) == 0){
				o.precision(1);
				o<<std::fixed<<BYELLOW<<nb ;}
			else
				o<<(i._doublevalue)<<std::endl;
			}
		catch(const std::exception& e){o << BRED<<e.what()<<BWHITE;}
		std::cout<< std::endl;

		o <<BGREEN<< "FLOAT = ";
		try{
			float nb ;
			nb = i.ConvertToFloat() ;
			double intPart;
			if (modf(nb, &intPart) == 0){
				o.precision(1);
				o<<std::fixed<<BYELLOW<<nb<<'f' ;}
			else
				o<<static_cast<float>(i._doublevalue)<<std::endl;
			}
		catch(const std::exception& e){o << BRED<<e.what()<<BWHITE;}
	}

	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
char		ScalarConversion::ConvertToChar() const
{
	if ( this->_doublevalue > 256 || this->_doublevalue < 0)
		throw ScalarConversion::ImpossibleExeption();
	char c;
	c = static_cast<char>(this->_doublevalue);
	if (isprint(c))
		return c;
	else
		throw ScalarConversion::NonDisplayableExeption();
	//switch (this->_type)
	//{
	//	case(charType):
	//		return this->_charvalue;
	//	case(intType):
	//		c = static_cast<char>(this->_doublevalue);
	//		if (isprint(c))
	//			return c;
	//		else
	//			throw ScalarConversion::NonDisplayableExeption();
	//	case(floatType):
	//			c = static_cast<char>(this->_doublevalue);
	//			if (isprint(c))
	//				return c;
	//			else
	//				throw ScalarConversion::NonDisplayableExeption();
	//	case(doubleType):
	//			c = static_cast<char>(this->_doublevalue);
	//			if (isprint(c))
	//				return c;
	//			else
	//				throw ScalarConversion::NonDisplayableExeption();
	//	default:
	//		return 0;
	//}
}

int			ScalarConversion::ConvertToInt() const
{
	if ( this->_doublevalue > std::numeric_limits<int>::max()|| this->_doublevalue < std::numeric_limits<int>::min())
		throw ScalarConversion::ImpossibleExeption();
	if (this->_doublevalue > static_cast<float>(2147483647)|| this->_doublevalue < static_cast<float>(-2147483648))
		throw ScalarConversion::ImpossibleExeption();
	else
		return static_cast<int>(this->_doublevalue);
	//switch (this->_type)
	//{
	//	case(charType):
	//		return static_cast<int>(this->_charvalue);
	//	case(intType):
	//		return this->_doublevalue;
	//	case(floatType):
	//		if (this->_doublevalue > static_cast<float>(2147483647)|| this->_doublevalue < static_cast<float>(-2147483648))
	//			throw ScalarConversion::ImpossibleExeption();
	//		else
	//			return static_cast<int>(this->_doublevalue);
	//	case(doubleType):
	//		if (this->_doublevalue > static_cast<float>(2147483647)|| this->_doublevalue < static_cast<float>(-2147483648))
	//			throw ScalarConversion::ImpossibleExeption();
	//		else
	//			return static_cast<int>(this->_doublevalue);
	//	default:
	//		return 0;
	//}
}

double		ScalarConversion::ConvertToDouble() const
{
	return static_cast<double>(this->_doublevalue);
}


float		ScalarConversion::ConvertToFloat() const
{
	return static_cast<float>(this->_doublevalue);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
