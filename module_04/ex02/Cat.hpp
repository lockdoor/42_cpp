/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:09:21 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/10 09:17:53 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : virtual public AAnimal
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