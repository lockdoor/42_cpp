/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 10:56:38 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/06 10:31:48 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <string>

class Weapon
{
private:
	std::string	_type;
public:
	Weapon();
	Weapon(std::string const &type);
	~Weapon();
	std::string	getType(void) const;
	void		setType(std::string const &type);
};

#endif