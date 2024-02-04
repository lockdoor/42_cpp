/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 08:16:36 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/04 07:10:09 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;
	std::cout << "string address    : " << &string << std::endl;
	std::cout << "*stringPTR address: " << stringPTR << std::endl;
	std::cout << "&strintREF address: " << &stringREF << std::endl;
	std::cout << "string value      : " << string << std::endl;
	std::cout << "*stringPTR value  : " << *stringPTR << std::endl;
	std::cout << "&strintREF value  : " << stringREF << std::endl;
	return (0);
}
