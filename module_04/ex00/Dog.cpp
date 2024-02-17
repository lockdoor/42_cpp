/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:59:40 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/16 08:46:13 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void)
{
	type = "Dog";
	std::cout << "Doc " << type << " constructor called" << std::endl;
}

Dog::Dog(Dog const &rhs) : Animal(rhs)
{
	std::cout << "Doc " << type << " copy constuct called" << std::endl;
}

Dog & Dog::operator=(Dog const &rhs)
{
	Animal::operator=(rhs);
	std::cout << "Doc " << type << " copy assign constuct called" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Doc " << type << " destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "Doc " << type << " make sound: Bark" << std::endl;
}
