/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 12:02:01 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/06 10:32:37 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP
#include <string>
#include "Weapon.hpp"

class HumanA
{
private:
	std::string	_name;
	Weapon*		_weapon;
public:
	HumanA(std::string const &name, Weapon &weapon);
	~HumanA();
	void attack(void) const;
};

#endif