/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 06:42:17 by pnamnil           #+#    #+#             */
/*   Updated: 2024/01/30 08:01:45 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
private:
	int	_fixed;
	static int const _fract = 8;
public:
	Fixed(void);
	Fixed(Fixed const &rhs);
	Fixed & operator=(Fixed const &rhs);
	~Fixed();
	int	getRowBits(void) const;
	void setRawBits(int const raw);
};




#endif