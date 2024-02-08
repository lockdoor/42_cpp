/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:22:00 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/08 15:19:58 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

const int ClapTrap::s_hitPointMax = 10;
const int ClapTrap::s_energyPointMax = 10;
const int ClapTrap::s_attackDamage = 0;

void ClapTrap::__initTrap(int hitPoint, int energyPoint)
{
	_hitPoint = hitPoint;
	_energyPoint = energyPoint;
}

/* ================================ constructor ============================= */
ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor called" << std::endl;
	__initTrap(s_hitPointMax, s_energyPointMax);
}

ClapTrap::ClapTrap(std::string const &name) : _name(name)
{
	std::cout << "ClapTrap constructor name called" << std::endl;
	__initTrap(s_hitPointMax, s_energyPointMax);
}

ClapTrap::ClapTrap(ClapTrap const &rhs)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	_name = rhs.getName();
	__initTrap(rhs.getHitPoint(), rhs.getEnergyPoint());
}

ClapTrap & ClapTrap::operator=(ClapTrap const &rhs)
{
	std::cout << "ClapTrap copy assignment called" << std::endl;
	if (this != &rhs) {
		_name = rhs.getName();
		__initTrap(rhs.getHitPoint(), rhs.getEnergyPoint());
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
	return (s_hitPointMax);
}

int ClapTrap::getHitPoint(void) const
{
	return (_hitPoint);
}

int ClapTrap::getEnergyPointMax(void) const
{
	return (s_energyPointMax);
}

int ClapTrap::getEnergyPoint(void) const
{
	return (_energyPoint);
}

int ClapTrap::getAttackDamage(void) const
{
	return (s_attackDamage);
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
		<< s_attackDamage << " points of damage!" << RESET << std::endl;
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
		if (_hitPoint > s_hitPointMax) _hitPoint = s_hitPointMax;
		_energyPoint -= 1;
		std::cout << GREEN << "ClapTrap " << _name << " repaired " << amount << ", hit point remain " 
			<< _hitPoint << " energy point remain " << _energyPoint << RESET << std::endl;
	}
}
