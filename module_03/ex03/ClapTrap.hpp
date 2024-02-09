/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:56:55 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/09 10:30:01 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

class ClapTrap
{
protected:
	std::string _name;
	int		_hpMax;
	int		_epMax;
	int		_atk;
	int		_hp;
	int		_ep;
	void	__initTrap(int hp, int ep, int hpMaX, int epMax, int atk);
	
public:
	ClapTrap();
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
	bool is_alive(void) const;
	void showStatus(void) const;
};

#endif