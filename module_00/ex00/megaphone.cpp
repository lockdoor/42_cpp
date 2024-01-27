/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:49:13 by pnamnil           #+#    #+#             */
/*   Updated: 2024/01/26 08:18:39 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		std::string word;
		std::locale loc;
		for (int i = 1; i < argc; i++)
		{
			word += argv[i];
			if (i < argc - 1) word += " ";
		}
		for (size_t i = 0; i < word.length(); i++)
			word[i] = std::toupper(word[i]);
		std::cout << word << std::endl;
	}
	return (0);
}
