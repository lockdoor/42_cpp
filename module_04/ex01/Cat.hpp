/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:09:21 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/09 16:56:46 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : virtual public Animal
{
private:
	Brain *_brain;
public:
	Cat(void);
	Cat(Cat const &rhs);
	Cat & operator=(Cat const &rhs);
	~Cat();
	
	void makeSound(void) const;
	Brain & getBrain(void) const;
};

#endif