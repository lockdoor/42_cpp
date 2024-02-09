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

DiamondTrap::DiamondTrap(void){
	__initTrap(100, 50, 100, 50, 20);
    std::cout << "DiamondTrap default constructor called" << std::endl;
};

DiamondTrap::DiamondTrap(std::string const &name) : 
	ClapTrap("ClapTrap"), 
	ScavTrap("ScavTrap"),
	FragTrap("FragTrap"),
	_name(name)
{
	__initTrap(100, 50, 100, 50, 20);
	// std::cout << "clap: " << ClapTrap::_ep 
	// 	<< ", scav: " << ScavTrap::_ep 
	// 	<< ", frag: " << FragTrap::_ep << std::endl;
	// std::cout << "addr: " << this << " size: " << sizeof(*this) << std::endl;
    std::cout << "DiamondTrap constructor name called " << std::endl;
};

DiamondTrap::DiamondTrap(DiamondTrap const &rhs) : ClapTrap(rhs)
{
	_name = rhs._name;
    std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const &rhs)
{
	std::cout << "DiamondTrap copy assignment called" << std::endl;
	if (this == &rhs) return (*this);
	_name = rhs._name;
	ClapTrap::operator=(rhs);
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::whoAmI(void) const
{
	std::cout << "DiamondTrap I am " << _name << " my parent is " 
		<< ScavTrap::_name << std::endl;
}
