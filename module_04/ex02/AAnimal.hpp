
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:46:52 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/10 07:21:05 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <string>

class AAnimal
{
protected:
	std::string type;
public:
	AAnimal(void);
	AAnimal(AAnimal const &rhs);
	virtual AAnimal & operator=(AAnimal const &rhs);
	virtual ~AAnimal();
	
	virtual void makeSound(void) const = 0;
	std::string const getType(void) const;
};

#endif
