/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 07:09:01 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/07 12:51:50 by pnamnil          ###   ########.fr       */
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
	Fixed b(10);
	Fixed c(42.42f);
	Fixed d(b);

	std::cout << "compair operator" << std::endl;	
	std::cout << b << " < " << c << " = " << (b < c) << std::endl;
	std::cout << b << " > " << c << " = " << (b > c) << std::endl;

	std::cout << b << " <= " << c << " = " << (b <= c) << std::endl;
	std::cout << b << " <= " << d << " = " << (b <= d) << std::endl;
	std::cout << c << " <= " << b << " = " << (c <= b) << std::endl;

	std::cout << b << " >= " << c << " = " << (b >= c) << std::endl;
	std::cout << b << " >= " << d << " = " << (b >= d) << std::endl;
	std::cout << c << " >= " << b << " = " << (c >= b) << std::endl;
	
	std::cout << b << " == " << d << " = " << (b == d) << std::endl;
	std::cout << b << " != " << d << " = " << (b != d) << std::endl;

	std::cout << "operand operator" << std::endl;
	std::cout << b << " + " << c << " = " << (b + c) << std::endl;
	std::cout << b << " - " << c << " = " << (b - c) << std::endl;
	std::cout << b << " * " << c << " = " << (b * c) << std::endl;
	std::cout << b << " / " << c << " = " << (b / c) << std::endl;

	std::cout << "operand operator ++ --" << std::endl;
	std::cout << "c   " << c << std::endl;
	std::cout << "++c " << ++c << std::endl;
	std::cout << "--c " << --c << std::endl;
	std::cout << "c++ " << c++ << std::endl;
	std::cout << "c   " << c << std::endl;
	std::cout << "c-- " << c-- << std::endl;
	std::cout << "c   " << c << std::endl;

	std::cout << "operand min max" << std::endl;
	std::cout << "min " << b << " : " << c << " = " << Fixed::min(b, c) << std::endl;
	std::cout << "max " << b << " : " << c << " = " << Fixed::max(b, c) << std::endl;
	return (0);
}
*/