/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 06:38:31 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/22 11:42:13 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <sstream>
#include <iostream>
#include <limits>

#define RESET   "\033[0m"
#define RED     "\033[31m"

ScalarConverter::ScalarConverter(/* args */){}

ScalarConverter::~ScalarConverter(){}

ScalarConverter::ScalarConverter(ScalarConverter const &rhs){(void) rhs;}

ScalarConverter & ScalarConverter::operator=(ScalarConverter const &rhs){(void) rhs; return (*this);}

std::string charString(long double const &d)
{
	if (d != d 
		|| d == std::numeric_limits<long double>::infinity()
		|| d == -std::numeric_limits<long double>::infinity()
		|| d > std::numeric_limits<char>::max()
		|| d < std::numeric_limits<char>::min())
		return ("Impossible");
	char c = static_cast<char>(d);
	if (isprint(c)) {
		std::ostringstream oss;
		oss << "'" << c << "'";
		return (oss.str());
	}
	return ("Non displayable");
}

std::string intString(long double const &d)
{
	if (d != d 
		|| d == std::numeric_limits<long double>::infinity()
		|| d == -std::numeric_limits<long double>::infinity()
		|| d > std::numeric_limits<int>::max()
		|| d < std::numeric_limits<int>::min())
		return ("Impossible");
	std::ostringstream oss;
	oss << static_cast<int>(d);
	return (oss.str());
}

// 1 check special
// 2 check overflow
// 3 normal case
std::string floatString(long double const &d)
{
	std::ostringstream oss;
	if (d != d 
		|| d == std::numeric_limits<long double>::infinity()
		|| d == -std::numeric_limits<long double>::infinity()) {
		oss << d << "f";
		if (oss.str() == "inff") {
			oss.str("+inff");
		}
	} 
	else if (d > std::numeric_limits<float>::max() 
		|| d < -std::numeric_limits<float>::max()) {
		oss << "Impossible";
	}
	else {
		oss << static_cast<float>(d);
		if (oss.str().find(".") == std::string::npos) {
			oss << ".0f";
		} else {
			oss << "f";
		}
	}
	return (oss.str());
}

std::string doubleString(long double const &d)
{
	std::ostringstream oss;
	if (d != d 
		|| d == std::numeric_limits<long double>::infinity()
		|| d == -std::numeric_limits<long double>::infinity()) {
		oss << d << "f";
		if (oss.str() == "inf") {
			oss.str("+inf");
		}
	} else {
		oss << d;
		if (oss.str().find(".") == std::string::npos) {
			oss << ".0";
		}
	}
	return (oss.str());
}

// std::strtod() can parse nan.. to nan
// std::isnan (not available in C++98), use (Nan != Nan) instead
// if overflow or non digit display Impossible
// this stream can check overflow or wrong input
// if input 42.0f on mac stringstream is get 0
void ScalarConverter::convert(std::string const &src)
{
	long double d;
	std::istringstream iss(src);
	if(iss >> d) {
		// std::cout << "right digit" << std::endl;
		std::cout << "char: " << charString(d) << std::endl;
		std::cout << "int: " << intString(d) << std::endl;
		std::cout << "float: " << floatString(d) << std::endl;
		std::cout << "double: " << doubleString(d) << std::endl;
	} else {
		std::cout << "result: " << d << std::endl;
		std::cout << "char: " << " Impossible" << std::endl;
		std::cout << "int: " << " Impossible" << std::endl;
		std::cout << "float: " << " Impossible" << std::endl;
		std::cout << "double: " << " Impossible" << std::endl;
	}
}
