/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:06:25 by pnamnil           #+#    #+#             */
/*   Updated: 2024/01/29 05:57:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <sstream>

PhoneBook::PhoneBook(void){
	_index = 0;
	_number = 0;
}

PhoneBook::~PhoneBook(void){}

std::string	PhoneBook::__getInput(std::string prompt) const
{
	std::string	input;

	while (true)
	{
		std::cout << prompt << "> ";
		if (!std::getline(std::cin, input)) {
			std::cout << "Good bye ....." << std::endl;
			exit(0);
		}
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
	if (_index == CONTACT_NUMBER) _index = 0;
	if (_number < CONTACT_NUMBER) _number++;
}

int PhoneBook::__isIndex(const std::string &str) const
{
	for (std::size_t i = 0; i < str.length(); i++) {
		if (!std::isdigit(str[i])) return (-1);
	}
	int	index = std::atoi(str.data());
	return ((index >= 1 && index <= CONTACT_NUMBER) ? index : -1);
}

void	PhoneBook::__showContact(void) const
{
	std::cout << "============= all contact =============" << std::endl;
	for(int i = 0; i < _number; i++){
		_contact[i].showContact(i + 1, TRUNCATE);
	}
}

void	PhoneBook::search(void) const
{
	if (_number == 0)
	{
		std::cout << "=========== contact is empty ==========" << std::endl;
		return ;
	}
	__showContact();
	while (true)
	{
		std::string	input;
		std::cout << "index> ";
		if (!std::getline(std::cin, input)) {
			std::cout << "Good bye ....." << std::endl;
			exit(0);
		}
		if (input.length())
		{
			std::istringstream strstream(input);
			while (strstream >> input)
			{
				int	index = __isIndex(input);
				if (index != -1){
					std::cout << "index: " << index << std::endl;
					_contact[index - 1].getData();
				} else {
					std::cout << input << ": can not find index" << std::endl;
				}
			}
			break;	
		}
	}
}

void PhoneBook::open(void)
{
	std::cout << "Welcome to Phonebook please type command" << std::endl;
	std::cout << "[ ADD | SEARCH | EXIT ]" << std::endl;
	while (true)
	{
		std::string	cmd;
		std::cout << "phonebook> ";
		if (!std::getline(std::cin, cmd)) break;
		if (cmd == "EXIT") break;
		if (cmd == "ADD") add();
		else if (cmd == "SEARCH") search();
	}
	std::cout << "Good bye ....." << std::endl;
}
