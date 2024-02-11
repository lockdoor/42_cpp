/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 07:27:58 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/11 10:57:39 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : virtual public AMateria
{
public:
	Ice(void);
	Ice(Ice const &rhs);
	Ice & operator=(Ice const &rhs);
	~Ice(void);

	Ice *clone() const;
	void use(ICharacter &target);
};

#endif