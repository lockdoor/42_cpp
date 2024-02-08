/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:59:30 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/08 08:32:32 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

int main(void)
{
	// Point a(-2.0f, -2.0f);
	// Point b(-3.0f, -2.0f);
	// Point c(3.0f, -2.0f);
	// Point point(1.0f, -7.0f);

	Point a(-2.0f, 2.0f);
	Point b(-3.0f, -2.0f);
	Point c(3.0f, -1.0f);
	Point point(1.0f, 1.0f);
	// Point point(0.0f, 0.0f);
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	if(bsp(a, b, c, point))
		std::cout << point << " The point is inside" << std::endl;
	else
		std::cout << point << " The point is outside" << std::endl;
	return (0);
}
