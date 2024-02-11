/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 07:15:25 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/11 10:57:57 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(void)
{
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "AMateria type constructor called" << std::endl;
}

AMateria::AMateria(AMateria const &rhs)
{
	_type = rhs.getType();
	std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria & AMateria::operator=(AMateria const &rhs)
{
	if (this != &rhs) _type = rhs.getType();
	std::cout << "AMateria copy assignment called" << std::endl;
	return (*this);
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria destructor called" << std::endl;
}

std::string const & AMateria::getType(void) const
{
	return (_type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << "* use AMeteria at " << target.getName() << " *" << std::endl;
}

