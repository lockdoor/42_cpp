/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 12:02:01 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/06 10:33:25 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP
#include <string>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string	_name;
	Weapon*		_weapon;
public:
	HumanB(std::string const &name);
	~HumanB();
	void attack(void) const;
	void setWeapon(Weapon &weapon);
};

#endif