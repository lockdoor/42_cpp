/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:18:08 by pnamnil           #+#    #+#             */
/*   Updated: 2024/01/28 16:16:44 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (EXIT_FAILURE);
	std::ifstream istrm(argv[1]);
	if (!istrm.is_open()){
		std::cerr << "failed to open " << argv[1] << std::endl;
		return (EXIT_FAILURE);
	}
	std::string	line;
	while (std::getline(istrm, line))
	{
		std::cout << line << std::endl;
	}
	istrm.close();
	return (0);
}
