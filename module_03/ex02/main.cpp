/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:56:52 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/05 15:25:01 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main(void)
{
	/* main test */
	std::srand(static_cast<unsigned int>(std::time(0)));
	FragTrap suck("Suck");
	suck.highFivesGuys(); 
	while (suck.is_alive())
	{
		suck.attack("Poling");
		suck.takeDamage(std::rand() % 10 + 1);
		suck.beRepaired(std::rand() % 10 + 1);
	}

	/* copy test */
	std::cout << "========== copy test ===============" << std::endl;
	FragTrap *suck1 = new FragTrap("suck");
	FragTrap *seed1 = new FragTrap(*suck1);

	/* copy assignment test */
	std::cout << "======== copy assign test ==========" << std::endl;
	*seed1 = *suck1;
	delete suck1;
	delete seed1;
	return (0);
}
