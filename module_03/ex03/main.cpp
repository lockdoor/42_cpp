/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:56:52 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/04 09:35:49 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main(void)
{
	std::srand(static_cast<unsigned int>(std::time(0)));
	DiamondTrap suck("Suck");
	// suck.highFivesGuys(); 
	// while (suck.is_alive())
	// {
	// 	suck.attack("Poling");
	// 	suck.takeDamage(std::rand() % 10 + 1);
	// 	suck.beRepaired(std::rand() % 10 + 1);
	// }
	return (0);
}
