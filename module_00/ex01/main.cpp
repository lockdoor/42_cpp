/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main .cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 09:47:10 by pnamnil           #+#    #+#             */
/*   Updated: 2024/01/24 17:05:31 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int	main(void)
{
	char		buf[2];
	PhoneBook	pb;

	std::cout << "Welcome to Phonebook please type command" << std::endl;
	std::cout << "[ ADD | SEARCH | EXIT ]" << std::endl;
	while (true)
	{
		std::cout << "> ";
		if(!(std::cin >> buf))
			break ;
		if (std::strcmp(buf, "EXIT") == 0)
			break ;
		if (std::strcmp(buf, "ADD") == 0)
			pb.add();
		else if (std::strcmp(buf, "SEARCH") == 0)
			pb.search();		
	}
	return (0);
}
