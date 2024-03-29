/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:49:22 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/17 07:59:08 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal(void) : type("Animal")
{
	std::cout << type << " constructor called" << std::endl;
}

Animal::Animal(Animal const &rhs) : type(rhs.getType())
{
	std::cout << type << " copy constuct called" << std::endl;
}

Animal & Animal::operator=(Animal const &rhs)
{
	if (this == &rhs) return (*this);
	type = rhs.getType();
	std::cout << type << " copy assignment constuct called" << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal " << type << " destructor called" << std::endl;
}

void Animal::makeSound(void) const
{
	std::cout << "Animal " << type << " make sound: ..." << std::endl;
}

std::string const Animal::getType(void) const
{
	return (type);
}
