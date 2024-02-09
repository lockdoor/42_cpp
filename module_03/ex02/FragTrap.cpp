/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 10:14:49 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/09 10:16:39 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void){
    std::cout << "FragTrap default constructor called" << std::endl;
    __initTrap(100, 100, 100, 100, 30);
};

FragTrap::FragTrap(std::string const &name) : ClapTrap(name){
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
	if (!is_alive())
		return ;
	_ep -= 1;
	std::cout << BLUE << "FragTrap " << _name << " attacks " << target << ", causing "
		<< _atk << " points of damage!" << RESET << std::endl;
}

void FragTrap::highFivesGuys(void) const
{
	std::cout << "FragTrap positive high fives request" << std::endl;
}
