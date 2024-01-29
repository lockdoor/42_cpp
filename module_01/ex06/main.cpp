/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:40:12 by pnamnil           #+#    #+#             */
/*   Updated: 2024/01/29 12:57:05 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	if (argc != 2){
		std::cerr << "use ./harlFilter level" << std::endl;
	}
	Harl	harl;
	harl.complain(argv[1]);
	return (0);
}
