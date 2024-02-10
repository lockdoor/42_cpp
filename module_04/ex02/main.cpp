/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:51:23 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/10 09:19:04 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>


/* 
	AAnimal have no brain
	cat2 is real AAnimal it not call cat constructor
	in this test brain is create 2 time in cat1, cat3
*/
/*
int main(void)
{
	const AAnimal *cat1 = new Cat();
	std::cout << std::endl;
	
	AAnimal *cat2 = new AAnimal(*cat1);
	std::cout << std::endl;
	
	AAnimal *cat3 = new Cat();
	std::cout << std::endl;
	
	*cat2 = AAnimal(*cat3);
	std::cout << std::endl;
	
	delete cat1;
	std::cout << std::endl;
	
	delete cat2;
	std::cout << std::endl;
	
	delete cat3;
	std::cout << std::endl;
	
	return (0);
}
*/


/* main test */
int main(void)
{
	AAnimal* cat = new Cat();
	AAnimal* dog = new Dog();
	
	// can not make instance of AAnimal
	// AAnimal *animal = new AAnimal();

	delete cat;
	delete dog;

	int n = 4;
	AAnimal* AAnimals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
	
	std::cout << "============ Make sound =========" << std::endl;
	for (int i = 0; i < n; i++) {
		AAnimals[i]->makeSound();
	}
	std::cout << "=================================" << std::endl;
	
	for (int i = 0; i < n; i++) {
		delete AAnimals[i];
	}
	return (0);
}

/* cat deep copy test*/
/*
int main(void)
{
	Cat cat1 = Cat();
	std::cout << std::endl;
	
	Cat cat2 = Cat(cat1);
	std::cout << std::endl;

	cat2 = cat1;
	std::cout << std::endl;

	return (0);
}
*/

/* dog deep copy test*/
/*
int main(void)
{
	Dog dog1 = Dog();
	std::cout << std::endl;
	
	Dog dog2 = Dog(dog1);
	std::cout << std::endl;

	dog2 = dog1;
	std::cout << std::endl;

	return (0);
}
*/
