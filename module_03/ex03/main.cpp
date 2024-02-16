/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:56:52 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/16 07:40:07 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

int main(void)
{
	/* main test */
	std::cout << "========== main test ===============" << std::endl;
	DiamondTrap suck("Suck");
	suck.guardGate();
	suck.highFivesGuys();
	suck.whoAmI();
	std::cout << suck << std::endl;
	suck.attack("Poling"); //expected ep=9
	std::cout << suck << std::endl;
	suck.takeDamage(5); //expected hp=5
	std::cout << suck << std::endl;
	suck.beRepaired(UINT32_MAX); //expected hp=10, ep=8
	std::cout << suck << std::endl;
	suck.takeDamage(100); //expected hp=0
	std::cout << suck << std::endl;
	suck.beRepaired(100); //expected do nothing because hp=0
	std::cout << suck << std::endl;

	/* loop test */
	// std::cout << "========== loop test ===============" << std::endl;
	// DiamondTrap seed("Seed");
	// std::srand(static_cast<unsigned int>(std::time(0)));
	// while (seed.is_alive())
	// {
	// 	seed.attack("Poling");
	// std::cout << seed << std::endl;
	// 	seed.takeDamage(std::rand() % 10 + 1);
	// std::cout << seed << std::endl;
	// 	seed.beRepaired(std::rand() % 10 + 1);
	// std::cout << seed << std::endl;
	// }

	/* copy test */
	// std::cout << "========== copy test ===============" << std::endl;
	// DiamondTrap *suck1 = new DiamondTrap("suck");
	// std::cout << *suck1 << std::endl;
	// suck1->takeDamage(50);
	// std::cout << *suck1 << std::endl;
	// DiamondTrap *seed1 = new DiamondTrap(*suck1);
	// std::cout << *seed1 << std::endl;
	// suck1->whoAmI();
	// seed1->whoAmI();
	// delete suck1;
	// delete seed1;

	/* copy assignment test */
	// std::cout << "======== copy assign test ==========" << std::endl;
	// DiamondTrap *suck2 = new DiamondTrap("Suck");
	// suck2->takeDamage(2);
	// std::cout << *suck2 << std::endl;
	// DiamondTrap *seed2 = new DiamondTrap("Seed");
	// std::cout << *suck2 << std::endl;
	// std::cout << *seed2 << std::endl;
	// *seed2 = *suck2;
	// std::cout << *suck2 << std::endl;
	// std::cout << *seed2 << std::endl;
	// suck2->whoAmI();
	// seed2->whoAmI();
	// delete suck2;
	// delete seed2;
	
	return (0);
}
