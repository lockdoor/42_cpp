/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 07:33:12 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/11 10:57:45 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(Ice const &rhs) : AMateria(rhs)
{
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice & Ice::operator=(Ice const &rhs)
{
	if (this != &rhs)
		AMateria::operator=(rhs);
	std::cout << "Ice copy assignment called" << std::endl;
	return (*this);
}

Ice::~Ice(void)
{
	std::cout << "Ice destructor called" << std::endl;
}

/* overide function */

Ice * Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
