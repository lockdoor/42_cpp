/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 06:42:17 by pnamnil           #+#    #+#             */
/*   Updated: 2024/01/30 11:12:34 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int	_fixed;
	static int const _fract = 8;
public:
	Fixed(void); //default constructor
	Fixed(int const n); // overload constructor
	// Fixed(float const f); // overload constructor
	Fixed(Fixed const &rhs); //copy constructor
	Fixed & operator=(Fixed const &rhs); //copy assignment constructor
	~Fixed(); //destructor
	int	getRowBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream & operator<<(std::ostream &o, Fixed const &i);

#endif