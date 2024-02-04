/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:22:00 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/04 10:23:20 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

/* ================================ constructor ============================= */

ClapTrap::ClapTrap(std::string const &name)
{
	_name = name;
	_hitPointMax = 10;
	_hitPoint = 10;
	_energyPointMax = 10;
	_energyPoint = 10;
	_attackDamage = 0;
	std::cout << "ClapTrap constructor string name: " << _name << " called"  << std::endl;
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
bool ClapTrap::is_alive(void) const
{
	return (_hitPoint > 0 && _energyPoint > 0);
}

void ClapTrap::attack(const std::string & target)
{
	if (!is_alive())
		return ;
	_energyPoint -= 1;
	std::cout << BLUE << "ClapTrap " << _name << " attacks " << target << ", causing "
		<< _attackDamage << " points of damage!" << RESET << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	_hitPoint = _hitPoint - amount;
	if(_hitPoint < 0) _hitPoint = 0;
	std::cout << RED << "ClapTrap " << _name << " take " << amount << " damage, hit point remain " 
		<< _hitPoint << RESET << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoint){
		_hitPoint = _hitPoint + amount;
		if (_hitPoint > _hitPointMax) _hitPoint = _hitPointMax;
		_energyPoint -= 1;
		std::cout << GREEN << "ClapTrap " << _name << " repaired " << amount << ", hit point remain " 
			<< _hitPoint << " energy point remain " << _energyPoint << RESET << std::endl;
	}
}
