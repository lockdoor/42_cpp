/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 07:16:59 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/04 14:59:13 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>

class Zombie
{
private:
	std::string	_name;
public:
	Zombie(std::string name);
	~Zombie();
	void announce(void) const;
};

Zombie *newZombie(std::string name);
void	randomChump(std::string name);

#endif
