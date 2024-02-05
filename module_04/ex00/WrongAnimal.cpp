/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:28:45 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/05 13:33:46 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(/* args */)
{
	type = "WrongAnimal";
	std::cout << type << " constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << type << " destructor called" << std::endl;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << type << ": ..." << std::endl;
}