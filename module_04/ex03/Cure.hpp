
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 07:27:58 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/11 10:57:39 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : virtual public AMateria
{
public:
	Cure(void);
	Cure(Cure const &rhs);
	Cure & operator=(Cure const &rhs);
	~Cure(void);

	Cure *clone() const;
	void use(ICharacter &target);
};

#endif