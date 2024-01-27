/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 09:42:34 by pnamnil           #+#    #+#             */
/*   Updated: 2024/01/26 08:40:45 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact(void)
{
	_isData = false;
}

Contact::~Contact(void){}

void Contact::setData(std::string data[5])
{
	_fname = data[0];
	_lname = data[1];
	_nname = data[2];
	_phone = data[3];
	_secret = data[4];
	_isData = true;
}

void Contact::getData(void) const
{
	std::cout << _fname << std::endl;
	std::cout << _lname << std::endl;
	std::cout << _nname << std::endl;
	std::cout << _phone << std::endl;
	std::cout << _secret << std::endl;
}
