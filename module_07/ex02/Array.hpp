/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:58:54 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/23 16:47:05 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template<typename T>
class Array
{
private:
	T *_datas;
	unsigned int _size;
public:
	Array(/* args */);
	Array(unsigned int size);
	Array(Array const &rhs);
	~Array();

	/* overload operator */
	Array & operator=(Array const &rhs);
	const T& operator[](unsigned int idx) const;
	T& operator[](unsigned int idx);

	/* member function */
	unsigned int size(void) const;
};

#endif
