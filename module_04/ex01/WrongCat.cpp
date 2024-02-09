/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:36:51 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/09 15:02:17 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(/* args */)
{
    type = "WrongCat";
	std::cout << type << " constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &rhs) : WrongAnimal(rhs)
{
	std::cout << type << " copy constuct called" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const &rhs)
{
	WrongAnimal::operator=(rhs);
	std::cout << type << " copy assign constuct called" << std::endl;
	return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << type << " destructor called" << std::endl;
}

void WrongCat::makeSound(void) const
{
    std::cout << type << ": Meaw" << std::endl;
}
