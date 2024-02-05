/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:36:51 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/05 13:39:42 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(/* args */)
{
    type = "WrongCat";
	std::cout << type << " constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << type << " destructor called" << std::endl;
}

void WrongCat::makeSound(void) const
{
    std::cout << type << ": Meaw" << std::endl;
}
