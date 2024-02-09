/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:22:00 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/09 10:20:13 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

void ClapTrap::__initTrap(int hp, int ep, int hpMaX, int epMax, int atk)
{
	_hp = hp;
	_ep = ep;
	_hpMax = hpMaX;
	_ep = epMax;
	_atk = atk;
}

/* ================================ constructor ============================= */
ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor called" << std::endl;
	__initTrap(10, 10, 10, 10, 0);
}

ClapTrap::ClapTrap(std::string const &name) : _name(name)
{
	std::cout << "ClapTrap constructor name called" << std::endl;
	__initTrap(10, 10, 10, 10, 0);
}

ClapTrap::ClapTrap(ClapTrap const &rhs)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	_name = rhs.getName();
	__initTrap(rhs.getHitPoint(), rhs.getEnergyPoint(), 10, 10, 0);
}

ClapTrap & ClapTrap::operator=(ClapTrap const &rhs)
{
	std::cout << "ClapTrap copy assignment called" << std::endl;
	if (this == &rhs) return (*this);
	_name = rhs.getName();
	__initTrap(rhs.getHitPoint(), rhs.getEnergyPoint(), 10, 10, 0);
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
	return (_hpMax);
}

int ClapTrap::getHitPoint(void) const
{
	return (_hp);
}

int ClapTrap::getEnergyPointMax(void) const
{
	return (_epMax);
}

int ClapTrap::getEnergyPoint(void) const
{
	return (_ep);
}

int ClapTrap::getAttackDamage(void) const
{
	return (_atk);
}

/* =========================== member function ======================== */
bool ClapTrap::is_alive(void) const
{
	return (_hp > 0 && _ep > 0);
}

void ClapTrap::attack(const std::string & target)
{
	if (!is_alive())
		return ;
	_ep -= 1;
	std::cout << BLUE << "ClapTrap " << _name << " attacks " << target << ", causing "
		<< _atk << " points of damage!" << RESET << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	_hp = _hp - amount;
	if(_hp < 0) _hp = 0;
	std::cout << RED << "ClapTrap " << _name << " take " << amount 
		<< " damage, hit point remain " << _hp << RESET << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_ep){
		_hp = _hp + amount;
		if (_hp > _hpMax) _hp = _hpMax;
		_ep -= 1;
		std::cout << GREEN << "ClapTrap " << _name << " repaired " << amount 
			<< ", hit point remain " << _hp << " energy point remain " 
			<< _ep << RESET << std::endl;
	}
}

void ClapTrap::showStatus(void) const
{
	std::cout << "name: " << _name << ", hp: " << _hp << ", ep: " << _ep
		<< ", atk: " << _atk << std::endl;
}
