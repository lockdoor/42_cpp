/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 12:06:06 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/06 10:36:18 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string const &name, Weapon &weapon)
{
	_name = name;
	_weapon = &weapon;
}

HumanA::~HumanA()
{
}

void HumanA::attack(void) const
{
  std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}