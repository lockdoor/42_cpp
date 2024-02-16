/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 10:14:49 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/09 09:43:54 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap()
{
	__initTrap(100, 50, 100, 50, 30);
    std::cout << "DiamondTrap constructor default called " << std::endl;
}

DiamondTrap::DiamondTrap(const char* name)
{
	if (!name) _name = "Unknow";
	else _name = name;
	ScavTrap::_name = _name + "_clap_name";
	__initTrap(100, 50, 100, 50, 30);
    std::cout << "DiamondTrap constructor name called " << std::endl;
};

DiamondTrap::DiamondTrap(DiamondTrap const &rhs) : ClapTrap(rhs), ScavTrap(rhs), FragTrap(rhs)
{
	_name = rhs._name;
    std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const &rhs)
{
	if (this == &rhs) return (*this);
	_name = rhs._name;
	ClapTrap::operator=(rhs);
	std::cout << "DiamondTrap copy assignment called" << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::whoAmI(void) const
{
	if (!is_alive()) return;
	std::cout << "DiamondTrap I am " << _name << " my parent is " 
		<< ScavTrap::_name << std::endl;
}
