/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 08:33:10 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/22 11:43:23 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP
#include "Data.hpp"
#include <stdint.h>
class Serializer
{
private:
	Serializer(/* args */);
	Serializer(Serializer const &rhs);
	Serializer & operator=(Serializer const &rhs);
public:
	static uintptr_t serialize(Data *ptr);
	static Data *deserialize(uintptr_t raw);
	~Serializer();
};



#endif