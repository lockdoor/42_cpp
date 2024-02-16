/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:22:00 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/15 14:28:44 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

void ClapTrap::__initTrap(u_int32_t hp, u_int32_t ep, u_int32_t hpMaX, u_int32_t epMax, u_int32_t atk)
{
	_hp = hp;
	_ep = ep;
	_hpMax = hpMaX;
	_epMax = epMax;
	_atk = atk;
}

/* ================================ constructor ============================= */

ClapTrap::ClapTrap(void) : _name("Unknow")
{
	__initTrap(10, 10, 10, 10, 0);
	std::cout << "ClapTrap constructor default called" << std::endl;
}

ClapTrap::ClapTrap(const char* name)
{
	if (!name) _name = "Unknow";
	else _name = name;
	__initTrap(10, 10, 10, 10, 0);
	std::cout << "ClapTrap constructor name called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &rhs)
{
	_name = rhs.getName();
	__initTrap(rhs.getHp(), rhs.getEp(), rhs.getHpMax(), rhs.getEpMax(), rhs.getAtk());
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

/* =========================== overload operator ======================== */
ClapTrap & ClapTrap::operator=(ClapTrap const &rhs)
{
	if (this == &rhs) return (*this);
	_name = rhs.getName();
	__initTrap(rhs.getHp(), rhs.getEp(), rhs.getHpMax(), rhs.getEpMax(), rhs.getAtk());
	std::cout << "ClapTrap copy assignment called" << std::endl;
	return (*this);
}

std::ostream & operator<<(std::ostream &o, ClapTrap const &i)
{
	o << "name: " << i.getName() << ", hp: " << i.getHp() 
		<< ", ep: " << i.getEp() << ", hpMax: " << i.getHpMax() 
		<< ", epMax: " << i.getEpMax() << ", atk: " << i.getAtk();
	return (o);
}

/* =========================== geter - seter ======================== */
const std::string & ClapTrap::getName(void) const
{
	return (_name);
}

int ClapTrap::getHpMax(void) const
{
	return (_hpMax);
}

int ClapTrap::getHp(void) const
{
	return (_hp);
}

int ClapTrap::getEpMax(void) const
{
	return (_epMax);
}

int ClapTrap::getEp(void) const
{
	
	return (_ep);
}

int ClapTrap::getAtk(void) const
{
	return (_atk);
}

/* =========================== member function ======================== */
bool ClapTrap::is_alive(void) const
{
	return (_hp > 0 && _ep > 0);
}

void ClapTrap::__doAttack(const std::string &name, const std::string &target)
{
	if (!is_alive()) return ;
	_ep -= 1;
	std::cout << BLUE << name  << " " << _name << " attacks " << target << ", causing "
		<< _atk << " points of damage!" << RESET << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	__doAttack("ClapTrap", target);
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (!is_alive()) return ;
	if (amount > _hp) _hp = 0;
	else _hp -= amount;
	std::cout << RED << "ClapTrap " << _name << " take " << amount << " damage" RESET << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!is_alive())
		return ;
	// handle overflow unsigned int
	if (_hp > _hp + amount) _hp = _hpMax;
	// handle overflow _hpMax
	else if (_hp + amount > _hpMax) _hp = _hpMax;
	else _hp = _hp + amount;
	_ep -= 1;
	std::cout << GREEN << "ClapTrap " << _name << " repaired " << amount << RESET << std::endl;	
}
