/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:56:52 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/15 15:44:11 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

int main(void)
{
	/* main test */
	std::cout << "========== main test ===============" << std::endl;
	ClapTrap suck("Suck");
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
	// ClapTrap seed("Seed");
	// std::srand(static_cast<unsigned int>(std::time(0)));
	// while (suck.is_alive())
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
	// ClapTrap *suck1 = new ClapTrap("suck");
	// std::cout << *suck1 << std::endl;
	// ClapTrap *seed1 = new ClapTrap(*suck1);
	// std::cout << *seed1 << std::endl;
	// delete suck1;
	// delete seed1;

	/* copy assignment test */
	// std::cout << "======== copy assign test ==========" << std::endl;
	// ClapTrap *suck2 = new ClapTrap("Suck");
	// suck2->takeDamage(2);
	// ClapTrap *seed2 = new ClapTrap("Seed");
	// std::cout << *suck2 << std::endl;
	// std::cout << *seed2 << std::endl;
	// *seed2 = *suck2;
	// std::cout << *suck2 << std::endl;
	// std::cout << *seed2 << std::endl;
	// delete suck2;
	// delete seed2;
	
	return (0);
}
