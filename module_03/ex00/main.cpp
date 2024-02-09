/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:56:52 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/09 14:19:35 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main(void)
{
	/* main test */
	std::cout << "========== man test ===============" << std::endl;
	ClapTrap suck("Suck");
	suck.showStatus();
	// std::srand(static_cast<unsigned int>(std::time(0)));
	while (suck.is_alive())
	{
		suck.attack("Poling");
		suck.takeDamage(std::rand() % 10 + 1);
		suck.beRepaired(std::rand() % 10 + 1);
	}

	/* copy test */
	std::cout << "========== copy test ===============" << std::endl;
	ClapTrap *suck1 = new ClapTrap("suck");
	ClapTrap *seed1 = new ClapTrap(*suck1);
	std::cout << "My name is " << suck1->getName() << std::endl;
	std::cout << "My name is " << seed1->getName() << std::endl;
	delete seed1;

	/* copy assignment test */
	std::cout << "======== copy assign test ==========" << std::endl;
	*seed1 = *suck1;
	std::cout << "My name is " << suck1->getName() << std::endl;
	std::cout << "My name is " << seed1->getName() << std::endl;
	delete suck1;
	delete seed1;
	return (0);
}
