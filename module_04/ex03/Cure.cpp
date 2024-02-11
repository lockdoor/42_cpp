/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 07:33:12 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/11 10:57:45 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(Cure const &rhs) : AMateria(rhs)
{
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure & Cure::operator=(Cure const &rhs)
{
	if (this != &rhs)
		AMateria::operator=(rhs);
	std::cout << "Cure copy assignment called" << std::endl;
	return (*this);
}

Cure::~Cure(void)
{
	std::cout << "Cure destructor called" << std::endl;
}

/* overide function */

Cure * Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
