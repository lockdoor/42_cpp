/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 09:26:56 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/04 09:33:08 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONTRAP_HPP
#define DIAMONTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap
{
private:
	std::string _name;
public:
	DiamondTrap(std::string const &name);
	~DiamondTrap();
};

#include <iostream>

DiamondTrap::DiamondTrap(std::string const &name) : ScavTrap(name + "_clap_name")
{
	_name = name;
	std::cout << "DiamondTrap constructor string name called " << _name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called " << std::endl;
}


#endif