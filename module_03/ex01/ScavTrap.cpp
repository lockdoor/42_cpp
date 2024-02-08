/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 10:14:49 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/08 15:25:06 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

const int ScavTrap::s_hitPointMax = 100;
const int ScavTrap::s_energyPointMax = 50;
const int ScavTrap::s_attackDamage = 20;

ScavTrap::ScavTrap(void){
    std::cout << "ScavTrap default constructor called" << std::endl;
    __initTrap(ScavTrap::s_hitPointMax, ScavTrap::s_energyPointMax);
};

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name){
    std::cout << "ScavTrap constructor name called" << std::endl;
    __initTrap(ScavTrap::s_hitPointMax, ScavTrap::s_energyPointMax);
};

ScavTrap::ScavTrap(ScavTrap const &rhs)
{
    std::cout << "ScavTrap copy constructor name called" << std::endl;
    _name = rhs.getName();
	__initTrap(rhs.getHitPoint(), rhs.getEnergyPoint());
}

ScavTrap & ScavTrap::operator=(ScavTrap const &rhs)
{
	std::cout << "ClapTrap copy assignment called" << std::endl;
	if (this != &rhs) {
		_name = rhs.getName();
		__initTrap(rhs.getHitPoint(), rhs.getEnergyPoint());
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string & target)
{
	if (!is_alive())
		return ;
	_energyPoint -= 1;
	std::cout << BLUE << "ScavTrap " << _name << " attacks " << target << ", causing "
		<< s_attackDamage << " points of damage!" << RESET << std::endl;
}

void ScavTrap::guardGate(void) const
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
