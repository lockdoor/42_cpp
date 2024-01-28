/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 09:42:34 by pnamnil           #+#    #+#             */
/*   Updated: 2024/01/28 06:45:09 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact(void)
{
	_hasData = false;
}

Contact::~Contact(void){}

void Contact::setData(std::string data[5])
{
	_fname = data[0];
	_lname = data[1];
	_nname = data[2];
	_phone = data[3];
	_secret = data[4];
	_hasData = true;
}

std::string Contact::truncate(const std::string &str, std::size_t len)
{
	if (str.length() <= len) return (str);
	std::string ret = str.substr(0, len);
	ret[len - 1] = '.';
	return (ret);
}

void Contact::showContact(std::size_t index, std::size_t len) const
{
	std::cout << std::setw(len) << std::right << index;
	std::cout << "|";
	std::cout << std::setw(len) << std::right << Contact::truncate(_fname, len);
	std::cout << "|";
	std::cout << std::setw(len) << std::right << Contact::truncate(_lname, len);
	std::cout << "|";
	std::cout << std::setw(len) << std::right << Contact::truncate(_nname, len);
	std::cout << std::endl;
}

void Contact::getData(void) const
{
	if (_hasData){
		std::cout << std::setw(12) << std::right << "First name:";
		std::cout << " " << _fname << std::endl;
		std::cout << std::setw(12) << std::right << "Last name:";
		std::cout << " " << _lname << std::endl;
		std::cout << std::setw(12) << std::right << "Nick name:";
		std::cout << " " << _nname << std::endl;
		std::cout << std::setw(12) << std::right << "Phone:";
		std::cout << " " << _phone << std::endl;
		std::cout << std::setw(12) << std::right << "Dark secret:";
		std::cout << " " << _secret << std::endl;
	} else {
		std::cout << "data is empty!" << std::endl;
	}
}
