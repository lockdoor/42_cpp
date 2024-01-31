/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 07:09:01 by pnamnil           #+#    #+#             */
/*   Updated: 2024/01/31 13:28:30 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << (b / 0) << std::endl;
	return 0;
	}

/*
int main(void)
{
	// Fixed 		a;
	Fixed b(10);
	Fixed c(42.42f);
	Fixed const e(b);
	Fixed const f(c);
	// Fixed d(b);

	// a = Fixed(1234.4321f);
	
	// std::cout << b << " < " << c << " = " << (b < c) << std::endl;
	// std::cout << b << " > " << c << " = " << (b > c) << std::endl;

	// std::cout << b << " <= " << c << " = " << (b <= c) << std::endl;
	// std::cout << b << " <= " << d << " = " << (b <= d) << std::endl;
	// std::cout << c << " <= " << b << " = " << (c <= b) << std::endl;

	// std::cout << b << " >= " << c << " = " << (b >= c) << std::endl;
	// std::cout << b << " >= " << d << " = " << (b >= d) << std::endl;
	// std::cout << c << " >= " << b << " = " << (c >= b) << std::endl;
	

	// std::cout << b << " == " << d << " = " << (b == d) << std::endl;
	// std::cout << b << " != " << d << " = " << (b != d) << std::endl;

	// std::cout << b << " + " << c << " = " << (b + c) << std::endl;
	// std::cout << b << " - " << c << " = " << (b - c) << std::endl;
	// std::cout << b << " * " << c << " = " << (b * c) << std::endl;
	// std::cout << b << " / " << c << " = " << (b / c) << std::endl;

	// std::cout << c << std::endl;
	// std::cout << ++c << std::endl;
	// std::cout << --c << std::endl;
	// std::cout << c++ << std::endl;
	// std::cout << c << std::endl;
	// std::cout << c-- << std::endl;
	// std::cout << c << std::endl;

	// std::cout << "b: " << &b << std::endl;
	// std::cout << "c: " << &c << std::endl;
	std::cout << Fixed::min(b, c) << std::endl;
	std::cout << Fixed::min(e, f) << std::endl;
	// std::cout << Fixed::min(b, c) << std::endl;
	std::cout << Fixed::max(b, c) << std::endl;
	std::cout << Fixed::max(e, f) << std::endl;
	return (0);
}
*/