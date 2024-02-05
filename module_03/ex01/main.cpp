/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:56:52 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/05 15:22:59 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main(void)
{
	/* main test */
	std::srand(static_cast<unsigned int>(std::time(0)));
	ScavTrap suck("Suck");
	suck.guardGate();
	while (suck.is_alive())
	{
		suck.attack("Poling");
		suck.takeDamage(std::rand() % 10 + 1);
		suck.beRepaired(std::rand() % 10 + 1);
	}

	/* copy test */
	std::cout << "========== copy test ===============" << std::endl;
	ScavTrap *suck1 = new ScavTrap("suck");
	ScavTrap *seed1 = new ScavTrap(*suck1);

	/* copy assignment test */
	std::cout << "======== copy assign test ==========" << std::endl;
	*seed1 = *suck1;
	delete suck1;
	delete seed1;
	return (0);
}