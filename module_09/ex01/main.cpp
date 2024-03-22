/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 07:07:49 by pnamnil           #+#    #+#             */
/*   Updated: 2024/03/22 08:14:34 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <iostream>
#include <stdexcept>

int main (int argc, char **argv) 
{
	if (argc != 2) {
		std::cerr << "use ./RPN \"1 1 +\"" << std::endl;
	}
	try {
		std::cout << RPN::calculate(argv[1]) << std::endl;
	} 
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}