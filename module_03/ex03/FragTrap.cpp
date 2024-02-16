/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 10:14:49 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/15 15:32:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "FragTrap constructor default called" << std::endl;
    __initTrap(100, 100, 100, 100, 30);
}

FragTrap::FragTrap(const char* name) : ClapTrap(name){
    std::cout << "FragTrap constructor name called" << std::endl;
    __initTrap(100, 100, 100, 100, 30);
};

FragTrap::FragTrap(FragTrap const &rhs) : ClapTrap(rhs)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const &rhs)
{
	std::cout << "FragTrap copy assignment called" << std::endl;
	if (this == &rhs) return (*this);
	ClapTrap::operator=(rhs);
	return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::attack(const std::string & target)
{
	__doAttack("FragTrap", target);
}

void FragTrap::highFivesGuys(void) const
{
	if (!is_alive()) return;
	std::cout << "FragTrap positive high fives request" << std::endl;
}
