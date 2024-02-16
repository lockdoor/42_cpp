/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:56:55 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/15 14:28:58 by pnamnil          ###   ########.fr       */
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
	std::string	_name;
	u_int32_t	_hpMax;
	u_int32_t	_epMax;
	u_int32_t	_atk;
	u_int32_t	_hp;
	u_int32_t	_ep;
	void	__initTrap(u_int32_t hp, u_int32_t ep, u_int32_t hpMaX, u_int32_t epMax, u_int32_t atk);
	void	__doAttack(const std::string &name, std::string const &target);
	
public:
	ClapTrap(void);
	ClapTrap(const char* name);
	ClapTrap(ClapTrap const &rhs);
	ClapTrap & operator=(ClapTrap const &rhs);
	~ClapTrap();
	
	/* geter seter */
	const std::string & getName(void) const;
	int getHpMax(void) const;
	int getHp(void) const;
	int getEpMax(void) const;
	int getEp(void) const;
	int getAtk(void) const;


	/* member function */
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	bool is_alive(void) const;
};

std::ostream & operator<<(std::ostream &o, ClapTrap const &i);

#endif