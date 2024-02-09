/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 10:14:49 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/09 09:43:54 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void){
    std::cout << "ScavTrap default constructor called" << std::endl;
    __initTrap(100, 50, 100, 50, 20);
};

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name){
    std::cout << "ScavTrap constructor name called" << std::endl;
    __initTrap(100, 50, 100, 50, 20);
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
	if (!is_alive())
		return ;
	_ep -= 1;
	std::cout << BLUE << "ScavTrap " << _name << " attacks " << target << ", causing "
		<< _atk << " points of damage!" << RESET << std::endl;
}

void ScavTrap::guardGate(void) const
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
