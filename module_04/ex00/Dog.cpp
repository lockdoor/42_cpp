/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:59:40 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/05 16:28:45 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(/* args */)
{
	type = "Dog";
	std::cout << type << " constructor called" << std::endl;
}

Dog::Dog(Animal const &rhs)
{
	if (this == &rhs)
		return ;
	type = rhs.getType();
	std::cout << type << " copy constuct called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Doc " << type << " destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "Doc " << type << ": Bark" << std::endl;
}
