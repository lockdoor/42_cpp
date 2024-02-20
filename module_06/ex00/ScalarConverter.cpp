/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 06:38:31 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/19 16:36:20 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <sstream>
#include <iostream>
#include <cstdlib>

#define CHAR 1
#define INT 2
#define FLOAT 3
#define DOUBLE 4

ScalarConverter::ScalarConverter(/* args */)
{
}

ScalarConverter::~ScalarConverter()
{
}

// can store 38
void printFloat(long double const &src)
{
	std::ostringstream str;
	str << src;
	std::cout << "float: ";
	if (src < -std::numeric_limits<float>::max() 
		|| src > std::numeric_limits<float>::max())
		std::cout << "imposible" << std::endl;
	else if (str.str().find(".") == std::string::npos)
		std::cout << static_cast<float>(src) << ".0f" << std::endl;
	else
		std::cout << static_cast<float>(src) << "f" << std::endl;
}

// bool printSpacial(long double const &src, int c)
// {
// 	o
// 	switch (c)
// 	{
// 	case CHAR:
// 		if ()
// 		break;
	
// 	default:
// 		break;
// 	}
// }

// void printChar(long double const &src)
// {
	
// }

/* if  */
// void printInt()

// std::strtod() can parse nan.. to nan
// std::isnan (not available in C++98)
void ScalarConverter::convert(std::string const &src)
{
	long double d;
	std::istringstream(src) >> d;
	// std::cout << d << std::endl;
	// std::ostringstream s;
	// s << d;
	// std::cout << s.str() << std::endl;
	// std::cout << std::strtod(src.data(), NULL) << std::endl;

	// NaN check
	// if (d != d) std::cout << "1 d is NaN" << std::endl;
	// if (std::numeric_limits<double>::has_signaling_NaN && d == std::numeric_limits<double>::signaling_NaN()) std::cout << "2 d is NaN" << std::endl;
	// std::cout << "Int: " << static_cast<int>(d) << std::endl;
	
	//
	// printChar(d);

	//int
	std::cout << "int: " << (int) d << std::endl;
	std::cout << "float: " << (int) d << std::endl;
	
		
	// printFloat(d);
	// if (d !=0 && (d < -std::numeric_limits<double>::min() || d > std::numeric_limits<double>::max())) std::cout <<  "double: Imposible" << std::endl;

	// handle overflow
	// std::cout << std::numeric_limits<double>::min() << std::endl;
	// std::cout << std::numeric_limits<double>::lowest() << std::endl;
	// if (d < std::numeric_limits<double>::lowest()) std::cout <<  "double: Imposible lowest" << std::endl;
	// if (d < -std::numeric_limits<double>::max()) std::cout <<  "double: Imposible min" << std::endl;
	// if (d < std::numeric_limits<float>::min()) std::cout <<  "float: Imposible" << std::endl;
}
