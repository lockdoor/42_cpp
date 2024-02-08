/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 10:14:49 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/02 10:55:12 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name){
    std::cout << "ScavTrap constructor string name called" << std::endl;
    _hitPointMax = 100;
    _hitPoint = 100;
    _energyPointMax = 50;
    _energyPoint = 50;
    _attackDamage = 20;
}; 

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
		<< _attackDamage << " points of damage!" << RESET << std::endl;
}

void ScavTrap::guardGate(void) const
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
