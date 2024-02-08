/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsc.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:41:29 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/07 15:12:15 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// https://www.desmos.com/calculator/icmwrfud0v?lang=th
// https://www.geeksforgeeks.org/check-whether-a-given-point-lies-inside-a-triangle-or-not/

#include "Point.hpp"
#include <iostream>

Fixed abs(Fixed a)
{
	if (a.getRowBits() < 0)
		a.setRawBits(a.getRowBits() * -1);
	return a;
}

Fixed calArea(Point const a, Point const b, Point const c)
{
	Fixed area1 = a.getX() * (b.getY() - c.getY());
	Fixed area2 = b.getX() * (c.getY() - a.getY());
	Fixed area3 = c.getX() * (a.getY() - b.getY());
	return abs((area1 + area2 + area3) / 2);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed area = calArea(a, b, c);
	Fixed area1 = calArea(point, b, c);
	Fixed area2 = calArea(a, point, c);
	Fixed area3 = calArea(a, b, point);
	return (area == (area1 + area2 + area3));
}
