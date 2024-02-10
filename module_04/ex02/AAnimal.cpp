/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:49:22 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/10 09:17:33 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal(void)
{
	type = "AAnimal";
	std::cout << "AAnimal " << type << " constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &rhs)
{
	if (this == &rhs) return;
	type = rhs.getType();
	std::cout << "AAnimal " << type << " copy constuct called" << std::endl;
}

AAnimal & AAnimal::operator=(AAnimal const &rhs)
{
	if (this == &rhs) return (*this);
	type = rhs.getType();
	std::cout << "AAnimal " << type << " copy assignment constuct called" << std::endl;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal " << type << " destructor called" << std::endl;
}

// void AAnimal::makeSound(void) const
// {
// 	std::cout << "AAnimal " << type << " make sound: ..." << std::endl;
// }

std::string const AAnimal::getType(void) const
{
	return (type);
}
