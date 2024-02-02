/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:56:55 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/01 11:19:44 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
private:
	std::string _name;
	int	_hitPointMax;
	int	_energyPointMax;
	int	_hitPoint;
	int	_energyPoint;
	int _attackDamage;
	
public:
	ClapTrap(/* args */);
	ClapTrap(std::string const &name);
	ClapTrap(ClapTrap const &rhs);
	ClapTrap & operator=(ClapTrap const &rhs);
	~ClapTrap();
	
	/* geter seter */
	const std::string & getName(void) const;
	void setName(std::string const & name);
	int getHitPointMax(void) const;
	int getHitPoint(void) const;
	int getEnergyPointMax(void) const;
	int getEnergyPoint(void) const;
	int getAttackDamage(void) const;

	/* member function */
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif