/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:51:23 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/05 16:39:08 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main(void)
{
	std::cout << "=========== correct ============" << std::endl;
	const Animal *animal = new Animal();
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();

	std::cout << "animal type: " << animal->getType() << std::endl;
	std::cout << "dog type   : " << dog->getType() << std::endl;
	std::cout << "cat type   : " << cat->getType() << std::endl;
	animal->makeSound();
	dog->makeSound();
	cat->makeSound();
	delete animal;
	delete dog;
	delete cat;

	std::cout << "=========== copy ============" << std::endl;
	const Animal *dog1 = new Dog();
	Animal *dog2 = new Dog(*dog1);
	*dog2 = *dog1;
	std::cout << dog1 << " : " << dog2 << std::endl;
	std::cout << "dog1 type  : " << dog1->getType() << std::endl;
	std::cout << "dog2 type  : " << dog2->getType() << std::endl;
	std::cout << "dog1 make sound" << std::endl;
	dog1->makeSound();
	std::cout << "dog2 make sound" << std::endl;
	dog2->makeSound();

	std::cout << "=========== delete ============" << std::endl;
	delete dog1;
	delete dog2;

	
	// std::cout << "=========== incorrect ============" << std::endl;
	// const WrongAnimal *wrongAnimal = new WrongAnimal();
	// const WrongAnimal *wrongCat = new WrongCat();
	// wrongAnimal->makeSound();
	// wrongCat->makeSound();
	// delete wrongAnimal;
	// delete wrongCat;
	return (0);
}
