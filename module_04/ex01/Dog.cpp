/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:59:40 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/10 08:16:04 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void)
{
	type = "Dog";
	std::cout << "Dog " << type << " constructor called" << std::endl;
	_brain = new Brain();
}

Dog::Dog(Dog const &rhs) : Animal(rhs)
{
	std::cout << "Dog " << type << " copy constuct called" << std::endl;
	_brain = new Brain(rhs.getBrain());
}

Dog & Dog::operator=(Dog const &rhs)
{
	if (this == &rhs) return (*this);
	delete _brain;
	Animal::operator=(rhs);
	std::cout << "Dog " << type << " copy assign constuct called" << std::endl;
	_brain = new Brain(rhs.getBrain());
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Doc " << type << " destructor called" << std::endl;
	delete _brain;
}

void Dog::makeSound(void) const
{
	std::cout << "Doc " << type << " make sound: Bark" << std::endl;
}

Brain & Dog::getBrain(void) const
{
	return (*_brain);
}
