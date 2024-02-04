/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 09:26:56 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/04 14:18:58 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONTRAP_HPP
#define DIAMONTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : virtual public ScavTrap, virtual public FragTrap
{
private:
	std::string _name;
public:
	DiamondTrap(std::string const &name);
	~DiamondTrap();
	// DiamondTrap & operator=(DiamondTrap const &rhs);
	using ScavTrap::attack;
	void whoAmI(void) const;
};

#endif