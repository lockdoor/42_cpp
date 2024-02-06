/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 11:09:26 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/06 10:32:04 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(/* args */)
{
}

Weapon::Weapon(std::string const &type)
{
	_type = type;
}

Weapon::~Weapon()
{
}

std::string Weapon::getType(void) const
{
	return (_type);
}

void Weapon::setType(std::string const &type)
{
	_type = type;
}