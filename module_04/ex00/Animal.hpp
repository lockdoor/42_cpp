/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:46:52 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/05 16:31:16 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal
{
protected:
	std::string type;
public:
	Animal(/* args */);
	Animal(Animal const &rhs);
	// ClapTrap & operator=(ClapTrap const &rhs);
	Animal & operator=(Animal const &rhs);
	virtual ~Animal();
	virtual void makeSound(void) const;
	std::string const getType(void) const;
};



#endif
