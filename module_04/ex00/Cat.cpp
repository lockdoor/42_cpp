/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:09:30 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/05 14:00:40 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(/* args */)
{
	type = "Cat";
	std::cout << type << " constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat " << type << " destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << type << ": Meaw" << std::endl;
}