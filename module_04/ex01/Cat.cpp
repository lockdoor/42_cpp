/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:09:30 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/17 08:10:22 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void)
{
	type = "Cat";
	std::cout << "Cat " << type << " constructor called" << std::endl;
	_brain = new Brain();
}

Cat::Cat(Cat const &rhs) : Animal(rhs)
{
	std::cout << "Cat " << type << " copy constuct called" << std::endl;
	_brain = new Brain(rhs.getBrain());
}

Cat & Cat::operator=(Cat const &rhs)
{
	if (this == &rhs) return (*this);
	delete _brain;
	Animal::operator=(rhs);
	std::cout << "Cat " << type << " copy assign constuct called" << std::endl;
	_brain = new Brain(rhs.getBrain());
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat " << type << " destructor called" << std::endl;
	delete _brain;
}

void Cat::makeSound(void) const
{
	std::cout << "Cat " << type << " make sound: Meaw" << std::endl;
}

Brain & Cat::getBrain(void) const
{
	return (*_brain);
}

