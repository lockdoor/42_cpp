/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 10:14:49 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/15 14:31:00 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void) : ClapTrap()
{
	__initTrap(100, 50, 100, 50, 20);
	std::cout << "ScavTrap constructor default called" << std::endl;
}

ScavTrap::ScavTrap(const char* name) : ClapTrap(name){
    __initTrap(100, 50, 100, 50, 20);
    std::cout << "ScavTrap constructor name called" << std::endl;
};

ScavTrap::ScavTrap(ScavTrap const &rhs) : ClapTrap(rhs)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const &rhs)
{
	std::cout << "ScavTrap copy assignment called" << std::endl;
	if (this == &rhs) return (*this);
	ClapTrap::operator=(rhs);
	return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string & target)
{
	__doAttack("ScavTrap", target);
}

void ScavTrap::guardGate(void) const
{
	if (!is_alive()) return;
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
