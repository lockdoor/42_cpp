/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 07:11:54 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/07 10:25:43 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

/* ========= constructor ============= */
Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	_fixed = 0;
}

Fixed::Fixed(int const n)
{
	std::cout << "Int constructor called" << std::endl;
	_fixed = n * (1 << _fract);
}

Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called" << std::endl;
	_fixed = std::roundf(f * (1 << _fract));
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

int	Fixed::toInt(void) const
{
	return (int(toFloat()));
}

float Fixed::toFloat(void) const
{
	return float(_fixed) / ( 1 << _fract );
}

/* ========= overload function ========= */
std::ostream & operator<<(std::ostream &o, Fixed const &i)
{
	o << i.toFloat();
	return (o);
}
