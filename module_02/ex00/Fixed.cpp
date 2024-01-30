/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 07:11:54 by pnamnil           #+#    #+#             */
/*   Updated: 2024/01/30 08:01:37 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

/* ========= constructor ============= */
Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	_fixed = 0;
}

Fixed::Fixed(Fixed const & rhs)
{
	std::cout << "Copy constructor called" << std::endl;
	_fixed = rhs.getRowBits();
}

Fixed & Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs) _fixed = rhs.getRowBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/* ========= member function ========= */
int	Fixed::getRowBits(void) const
{
	std::cout << "getRowBits member function called" << std::endl;
	return (_fixed);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRowBits member function called" << std::endl;
	_fixed = raw;
}
