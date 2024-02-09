/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:09:30 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/09 18:38:58 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(/* args */)
{
	type = "Cat";
	_brain = new Brain();
	std::cout << type << " constructor called" << std::endl;
}

Cat::Cat(Cat const &rhs)
{
	*this = rhs;
	std::cout << type << " copy constuct called" << std::endl;
}
// Cat::Cat(Cat const &rhs) : Animal(rhs)
// {
// 	_brain = new Brain(rhs.getBrain());
// 	std::cout << type << " copy constuct called" << std::endl;
// }

Cat & Cat::operator=(Cat const &rhs)
{
	if (this == &rhs) return (*this);
	// delete _brain;
	Animal::operator=(rhs);
	_brain = new Brain(rhs.getBrain());
	std::cout << type << " copy assign constuct called" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat " << type << " destructor called" << std::endl;
	delete _brain;
}

void Cat::makeSound(void) const
{
	std::cout << type << " make sound: Meaw" << std::endl;
}

Brain & Cat::getBrain(void) const
{
	return (*_brain);
}

// void Cat::getIdea(void) const
// {
// 	std::cout << _brain->getIdeas(1) << std::endl;
// }
