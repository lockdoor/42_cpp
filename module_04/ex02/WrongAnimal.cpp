/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:28:45 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/09 15:00:10 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(/* args */)
{
	type = "WrongAnimal";
	std::cout << type << " constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &rhs)
{
	if (this == &rhs) return;
	type = rhs.getType();
	std::cout << type << " copy constuct called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const &rhs)
{
	if (this == &rhs) return (*this);
	type = rhs.getType();
	std::cout << type << " copy assignment constuct called" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << type << " destructor called" << std::endl;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << type << ": ..." << std::endl;
}

std::string const WrongAnimal::getType(void) const
{
	return (type);
}
