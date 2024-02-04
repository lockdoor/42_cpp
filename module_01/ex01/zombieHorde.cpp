/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 15:02:12 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/04 15:03:50 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie *zombieHorde(int n, std::string name)
{
	if (n < 1 || n > 1000)
	{
		std::cerr << "can not create " << n << " zombie" << std::endl;
		exit (EXIT_FAILURE);
	}
	Zombie *zombie = new Zombie[n];
	for (int i = 0; i < n; i++) zombie[i].setName(name); 
	return (zombie);
}
