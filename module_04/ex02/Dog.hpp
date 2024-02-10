/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:57:16 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/10 09:18:03 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
private:
	Brain *_brain;
public:
	Dog(void);
	Dog(Dog const &rhs);
	Dog & operator=(Dog const &rhs);
	~Dog();
	
	void makeSound(void) const;
	Brain & getBrain(void) const;
};

#endif
