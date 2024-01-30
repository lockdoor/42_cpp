/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:18:08 by pnamnil           #+#    #+#             */
/*   Updated: 2024/01/30 16:58:10 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
	// check argument
	if (argc != 4) {
		std::cerr << "use ./prog filename s1 s2" << std::endl;
		return (EXIT_FAILURE);
	}

	// open in file
	std::ifstream file(argv[1]);
	if (!file.is_open()) {
		std::cerr << "can not open " << argv[1] << std::endl;
		return (EXIT_FAILURE); 
	}

	// open out file
	std::string fileOut = argv[1];
	fileOut += ".replace";
	std::ofstream replace(fileOut, std::ios::binary);
	if (!replace.is_open()) {
		std::cerr << "can not open " << fileOut << std::endl;
		return (EXIT_FAILURE); 
	}

	// begin replace
	std::string	buf;
	while(std::getline(file, buf)) {
		std::string find(argv[2]);
		std::size_t found = 0;
		while (found != std::string::npos){
			found = buf.find(find);
			if (found == std::string::npos)
			{
				replace << buf;
				break ;
			}
			replace << buf.substr(0, found) << argv[3];
			buf = buf.substr(found + find.length());
		}
		replace << std::endl;
	}
	return (0);
}
