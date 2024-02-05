/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:56:52 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/05 15:23:21 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main(void)
{
	/* main test */
	std::srand(static_cast<unsigned int>(std::time(0)));
	ClapTrap suck("Suck");
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

	/* copy assignment test */
	std::cout << "======== copy assign test ==========" << std::endl;
	*seed1 = *suck1;
	delete suck1;
	delete seed1;
	return (0);
}