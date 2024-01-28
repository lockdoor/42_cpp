/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 09:47:10 by pnamnil           #+#    #+#             */
/*   Updated: 2024/01/27 10:08:56 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	PhoneBook	pb;

	std::cout << "Welcome to Phonebook please type command" << std::endl;
	std::cout << "[ ADD | SEARCH | EXIT ]" << std::endl;
	while (true)
	{
		std::string	cmd;
		std::cout << "phonebook> ";
		if (!std::getline(std::cin, cmd)) break;
		if (cmd == "e") break;
		if (cmd == "a") pb.add();
		else if (cmd == "s") pb.search();	
	}
	std::cout << "Good bye ....." << std::endl;
	return (0);
}
