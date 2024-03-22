/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:01:00 by pnamnil           #+#    #+#             */
/*   Updated: 2024/03/20 14:07:20 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>
#include <iostream>
#include <sstream>

BitcoinExchange::BitcoinExchange(std::string const &filename)
{
	std::ifstream file(filename);
	if (!file.is_open()) {
		std::cerr << "can not open " << filename << std::endl;
		exit (EXIT_FAILURE); 
	}

	std::string buf;
	int date;
	float value;
	std::getline(file, buf);
	while (std::getline(file, buf)) {
		date = 0;
		value = 0;
		if (!parser(buf, &date, &value, ',')) exit (EXIT_FAILURE);
		_data[date] = value;
	}
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &rhs)
{
	*this = rhs;
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange & BitcoinExchange::operator=(BitcoinExchange const &rhs)
{
	if (this != &rhs) {
		_data = rhs.get_data();
	}
	return (*this);
}

/* member function */

const std::map<int, float> &BitcoinExchange::get_data(void) const
{
	return (_data);
}

void BitcoinExchange::calculate(std::string const &filename)
{
	std::ifstream file(filename);
	if (!file.is_open()) {
		std::cerr << "can not open " << filename << std::endl;
		exit (EXIT_FAILURE); 
	}
	std::string buf;
	int date;
	float value;
	std::map<int, float>::const_iterator it;
	std::getline(file, buf);
	while (std::getline(file, buf)) {
		date = 0;
		value = 0;
		if (parser(buf, &date, &value, '|'))
		{
			if (date < _data.begin()->first) {
				std::cerr << "Error: date out of length => " << intToDateString(date) << std::endl;
			}
			it = _data.lower_bound(date);
			if (it != _data.begin()) it--;
			if (it != _data.end()) {
				std::cout << intToDateString(date) << " => " << value << " = " << value * it->second << std::endl;
				// std::cout << intToDateString(date) << " => " << value << " * " << it->second << std::endl;
			}
		}
	}
}

std::string const BitcoinExchange::intToDateString(int date) const
{
	std::ostringstream ss;
	ss << date / 10000 << '-'
		<< (((date % 10000) / 100) < 10 ? "0" : "") << (date % 10000) / 100  << '-'
		<< (date % 100 < 10 ? "0" : "") << date % 100;
	return (ss.str());
}

void BitcoinExchange::showData() const
{
	std::map<int, float>::const_iterator it;
	for (it = _data.begin(); it != _data.end(); ++it) {
		std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
	}
}

bool BitcoinExchange::parser(std::string buf, int *date, float *value, char sep)
{
	size_t seperate = buf.find(sep);
	if (seperate == std::string::npos) {
		std::cerr << BAD_INPUT << buf << std::endl;
		return (false);
	}

	std::string dateString = buf.substr(0, seperate);
	dateString = trim(dateString);
	
	*date = dateStringToInt(dateString);

	if (*date == 0) {
		std::cerr << BAD_INPUT << buf << std::endl;
		return (false);
	}

	/* value */
	std::string valueString = buf.substr(seperate + 1);
	valueString = trim(valueString);

	if (!valueStringToFloat(valueString, value)) {
		std::cerr << BAD_INPUT << buf << std::endl;
		return (false);
	}
		
	if (*value < 0) {
		std::cerr << buf << " => " << NEGATIVE_NUMBER << std::endl;
		return (false);
	}
	
	return (true);
}

bool BitcoinExchange::valueStringToFloat(std::string const &valueString, float *value)
{

	if (!valueString.length()) return (false);
	
	/* check format */
	std::string floatFormat = ".0123456789";
	int dot = 0;
	size_t i = 0;
	if (valueString.at(i) == '-') i++;
	for (; i < valueString.length(); i++) {
		if (valueString.at(i) == '.') dot++;
		if (dot > 1) return (false);
		if (floatFormat.find(valueString.at(i)) == std::string::npos) return (false);
	}
	
	/* transfrom to float */
	std::istringstream vv(valueString);
	vv >> *value;
	if (vv.fail()) return(false);
	vv.clear();
	return (true);
}

/* return date as int or error code as 0 */
/* 0: bad input */
int BitcoinExchange::dateStringToInt(std::string const &dateString)
{
	if (!checkDateFormat(dateString)) return (0);
	std::istringstream ss(dateString);
	int year, month, date;
	ss >> year;
	if (ss.fail() || year < 1900) return (0);
	ss >> month;
	month = std::abs(month);
	if (ss.fail() || month > 12 || month < 1) return (0);
	ss >> date;
	date = std::abs(date);
	if (ss.fail()) return (0);
	if (!checkValidDate(year, month, date)) return (0);
	ss.clear();
	return ((year * 10000) + (month * 100) + date);
}

/* check date format "yyyy-mm-dd" */
bool BitcoinExchange::checkDateFormat(std::string const &str)
{
	if (str.length() != 10) return (false);
	int i = 0;
	while (i < 4) {
		if (!std::isdigit(str.at(i))) return (false);
		i++ ;
	}
	if (str.at(i) != '-') return (false);
	i++ ;
	while (i < 7) {
		if (!std::isdigit(str.at(i))) return (false);
		i++ ;
	}
	if (str.at(i) != '-') return (false);
	i++ ;
	while (i < 10) {
		if (!std::isdigit(str.at(i))) return (false);
		i++ ;
	}
	return (true);
}

bool BitcoinExchange::checkValidDate(int y, int m, int d)
{
	bool leapYear = false;
	if (y % 4 == 0) {
		leapYear = true;
		if (y % 100 == 0) {
			leapYear = false;
			if ( y % 400 == 0) {
				leapYear = true;
			}
		}
	}
	switch (m)
	{
		case 1:	case 3: case 5: case 7: case 8: case 10:
		case 12: if (d <= 31) return (true);
		case 4: case 6: case 9:
		case 11: if (d <= 30) return (true);
		case 2:	if ((leapYear && d <= 29) || (!leapYear && d <= 28)) return (true);
		default: break;
	}
	return (false);
}

std::string BitcoinExchange::trim(std::string &str)
{
	std::size_t start = str.find_first_not_of(" \t\n\r");
	std::size_t end = str.find_last_not_of(" \t\n\r");
	if (start == std::string::npos || start == std::string::npos)
		return ("");
	return (str.substr(start, end - start + 1));
}
