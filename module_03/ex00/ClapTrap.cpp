/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:22:00 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/01 08:29:29 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

/* ================================ constructor ============================= */
ClapTrap::ClapTrap(/* args */)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
	_hitPointMax = 10;
	_hitPoint = 10;
	_energyPointMax = 10;
	_energyPoint = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string const &name)
{
	std::cout << "ClapTrap constructor string name called" << std::endl;
	_name = name;
	_hitPointMax = 10;
	_hitPoint = 10;
	_energyPointMax = 10;
	_energyPoint = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap const &rhs)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	_name = rhs.getName();
	_hitPointMax = rhs.getHitPointMax();
	_hitPoint = rhs.getHitPoint();
	_energyPointMax = rhs.getEnergyPointMax();
	_energyPoint = rhs.getEnergyPoint();
	_attackDamage = rhs.getAttackDamage();
}

ClapTrap & ClapTrap::operator=(ClapTrap const &rhs)
{
	std::cout << "ClapTrap copy assignment called" << std::endl;
	if (this != &rhs) {
		_name = rhs.getName();
		_hitPointMax = rhs.getHitPointMax();
		_hitPoint = rhs.getHitPoint();
		_energyPointMax = rhs.getEnergyPointMax();
		_energyPoint = rhs.getEnergyPoint();
		_attackDamage = rhs.getAttackDamage();
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
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

int ClapTrap::getHitPointMax(void) const
{
	return (_hitPointMax);
}

int ClapTrap::getHitPoint(void) const
{
	return (_hitPoint);
}

int ClapTrap::getEnergyPointMax(void) const
{
	return (_energyPointMax);
}

int ClapTrap::getEnergyPoint(void) const
{
	return (_energyPoint);
}

int ClapTrap::getAttackDamage(void) const
{
	return (_attackDamage);
}

/* =========================== member function ======================== */

void ClapTrap::takeDamage(unsigned int amount)
{
	_hitPoint = (_hitPoint - amount) > 0 
		? _hitPoint - amount : 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	_energyPoint = (_energyPoint + amount) < _energyPointMax 
		? _energyPoint + amount 
		: _energyPointMax;
}
