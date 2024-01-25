/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:49:13 by pnamnil           #+#    #+#             */
/*   Updated: 2024/01/22 16:49:14 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctype.h>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		std::string word;
		for (int i = 1; i < argc; i++)
		{
			word += argv[i];
			if (i < argc - 1) word += " ";
		}
		for (size_t i = 0; i < word.length(); i++)
		{
			word[i] = toupper(word[i]);
		}
		std::cout << word << std::endl;
	}
	return (0);
}
