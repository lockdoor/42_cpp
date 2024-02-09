/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 08:10:32 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/09 10:00:35 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
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