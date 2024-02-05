/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 10:52:46 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/05 06:30:32 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(std::string const &name) : 
	ClapTrap(name + "_clap_name"),
	ScavTrap(name + "_clap_name"),
	FragTrap(name + "_clap_name")
{
	_name = name;
	ScavTrap::_energyPoint = 50;
	ScavTrap::_attackDamage = 20;
	std::cout << "DiamondTrap constructor string name: " << _name << " called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called " << std::endl;
}

void DiamondTrap::whoAmI(void) const
{
	std::cout << "I am " << _name << std::endl;
	std::cout << "my parent is " << ClapTrap::_name << std::endl;
}

// DiamondTrap & DiamondTrap::operator=(DiamondTrap const &rhs)
// {
// 	std::cout << "DiamondTrap copy assignment called" << std::endl;
// 	std::cout << "      ++" << _name << std::endl;
// 	if (this != &rhs) {
// 		ScavTrap::_name = rhs.getName();
// 		// _hitPointMax = rhs.getHitPointMax();
// 		// _hitPoint = rhs.getHitPoint();
// 		// _energyPointMax = rhs.getEnergyPointMax();
// 		// _energyPoint = rhs.getEnergyPoint();
// 		// _attackDamage = rhs.getAttackDamage();
// 	}
// 	return (*this);
// }