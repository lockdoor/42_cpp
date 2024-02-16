/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 08:10:32 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/15 15:38:24 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
    FragTrap(void);
    FragTrap(const char* name);
    FragTrap(FragTrap const &rhs);
	FragTrap & operator=(FragTrap const &rhs);
    ~FragTrap();
    void attack(const std::string & target);
    void highFivesGuys(void) const;
};

#endif