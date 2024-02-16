/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 09:26:56 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/15 15:38:40 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONTRAP_HPP
#define DIAMONTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
protected:
	std::string _name;
public:
	DiamondTrap(void);
	DiamondTrap(const char* name);
	DiamondTrap(DiamondTrap const &rhs);
	DiamondTrap & operator=(DiamondTrap const &rhs);
	~DiamondTrap();
	using ScavTrap::attack;
	void whoAmI(void) const;
};

#endif