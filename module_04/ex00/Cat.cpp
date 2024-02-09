/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:09:30 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/09 14:55:59 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(/* args */)
{
	type = "Cat";
	std::cout << type << " constructor called" << std::endl;
}

Cat::Cat(Cat const &rhs) : Animal(rhs)
{
	std::cout << type << " copy constuct called" << std::endl;
}

Cat & Cat::operator=(Cat const &rhs)
{
	Animal::operator=(rhs);
	std::cout << type << " copy assign constuct called" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat " << type << " destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << type << " make sound: Meaw" << std::endl;
}