/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 08:10:32 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/08 15:22:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
    static const int	s_hitPointMax;
	static const int	s_energyPointMax;
	static const int	s_attackDamage;
public:
    ScavTrap(void);
    ScavTrap(std::string const &name);
    ScavTrap(ScavTrap const &rhs);
	ScavTrap & operator=(ScavTrap const &rhs);
    ~ScavTrap();
    void attack(const std::string & target);
    void guardGate(void) const;
};

#endif