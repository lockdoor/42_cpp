/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:56:52 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/05 15:29:02 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main(void)
{
	/* main test */
	std::srand(static_cast<unsigned int>(std::time(0)));
	DiamondTrap suck("Suck");
	suck.whoAmI();
	suck.highFivesGuys();
	suck.guardGate(); 
	while (suck.is_alive())
	{
		suck.attack("Poling");
		suck.takeDamage(std::rand() % 10 + 1);
		suck.beRepaired(std::rand() % 10 + 1);
	}
	DiamondTrap seed("helll");
	seed = suck;
	seed.whoAmI();

	/* copy test */
	std::cout << "========== copy test ===============" << std::endl;
	DiamondTrap *suck1 = new DiamondTrap("suck");
	DiamondTrap *seed1 = new DiamondTrap(*suck1);

	/* copy assignment test */
	std::cout << "======== copy assign test ==========" << std::endl;
	*seed1 = *suck1;
	delete suck1;
	delete seed1;
	return (0);
}
