/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:22:00 by pnamnil           #+#    #+#             */
/*   Updated: 2024/01/31 15:16:24 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

/* ================================ constructor ============================= */
ClapTrap::ClapTrap(/* args */)
{
	std::cout << "default constructor called" << std::endl;
	_hitPoint = 10;
	_energyPoint = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string const &name)
{
	std::cout << "constructor string name called" << std::endl;
	_name = name;
	_hitPoint = 10;
	_energyPoint = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap const &rhs)
{
	std::cout << "copy constructor called" << std::endl;
	_name = rhs.getName();
	_hitPoint = rhs.getHitPoint();
	_energyPoint = rhs.getEnergyPoint();
	_attackDamage = rhs.getAttackDamage();
}

ClapTrap & ClapTrap::operator=(ClapTrap const &rhs)
{
	std::cout << "copy assignment called" << std::endl;
	if (this != &rhs) {
		_name = rhs.getName();
		_hitPoint = rhs.getHitPoint();
		_energyPoint = rhs.getEnergyPoint();
		_attackDamage = rhs.getAttackDamage();
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "destructor called" << std::endl;
}

/* =========================== geter - seter ======================== */
const std::string & ClapTrap::getName(void) const
{
	return (_name);
}

void ClapTrap::setName(std::string const & name)
{
	_name = name;
}

int ClapTrap::getHitPoint(void) const
{
	return (_hitPoint);
}

int ClapTrap::getEnergyPoint(void) const
{
	return (_energyPoint);
}

int ClapTrap::getAttackDamage(void) const
{
	return (_attackDamage);
}
