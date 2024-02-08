/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:49:40 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/07 15:14:05 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

/* constructor */
Point::Point(void)
{
	_x.setRawBits(0);
	_y.setRawBits(0);
}

Point::Point(float const &x, float const &y)
{
	_x = Fixed(x);
	_y = Fixed(y);
}

Point::Point(Point const &rsh)
{
	_x = rsh._x;
	_y = rsh._y;
}

Point & Point::operator=(Point const &rsh)
{
	if (this == &rsh) return *this;
	_x = rsh._x;
	_y = rsh._y;
	return *this;
}

Point::~Point(){}

/* member function */
Fixed Point::getX(void) const
{
	return (_x);
}

Fixed Point::getY(void) const
{
	return (_y);
}

std::ostream & operator<<(std::ostream &o, Point const &i)
{
	o << "(" << i.getX() << " ," << i.getY() << ")";
	return (o);
}
