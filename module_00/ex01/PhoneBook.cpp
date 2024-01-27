/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:06:25 by pnamnil           #+#    #+#             */
/*   Updated: 2024/01/26 13:07:34 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

PhoneBook::PhoneBook(void){}

PhoneBook::~PhoneBook(void){}

std::size_t PhoneBook::_index = 0;

std::string	PhoneBook::__getInput(std::string prompt)
{
	std::string	input;

	while (true)
	{
		std::cout << prompt << "> ";
		if (!std::getline(std::cin, input)) break;
		if (!input.empty()) break;
	}
	return (input);
}

void	PhoneBook::add(void)
{
	std::string	data[5];

	std::cout << "funtion add called" << std::endl;
	data[0] = __getInput("First name");
	data[1] = __getInput("Last name");
	data[2] = __getInput("Nick name");
	data[3] = __getInput("Phone");
	data[4] = __getInput("Secret");
	_contact[_index].setData(data);
	_index++;
	if (_index == 8) _index = 0;
}

void	PhoneBook::search(void)
{
	std::size_t	index;

	std::cout << "funtion search called" << std::endl;
	std::cout << "index> ";
	while (!(std::cin >> index))
	{
		std::cout << "index> ";
		// if (std::cin >> index) break;
		// if (!std::cin.eof())continue;
	}
	// std::cin >> index ;
	
	_contact[index].getData();
}
