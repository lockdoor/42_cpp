/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:43:37 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/07 14:52:48 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	Fixed _x;
	Fixed _y;
public:
	// constructor
	Point(void);
	Point(float const &x, float const &y);
	Point(Point const &rsh);
	Point & operator=(Point const &rsh);
	~Point();
	// member function
	Fixed getX(void) const;
	Fixed getY(void) const;
};

std::ostream & operator<<(std::ostream &o, Point const &i);
bool bsp(Point const a, Point const b, Point const c, Point const point);
#endif