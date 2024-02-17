/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:51:23 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/17 08:14:46 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>


/* 
	animal have no brain
	cat2 is real animal it not call cat constructor
	in this test brain is create 2 time in cat1, cat3
*/
/*
int main(void)
{
	const Animal *cat1 = new Cat();
	std::cout << std::endl;
	
	Animal *cat2 = new Animal(*cat1);
	std::cout << std::endl;
	
	Animal *cat3 = new Cat();
	std::cout << std::endl;
	
	*cat2 = Animal(*cat3);
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
	Animal* cat = new Cat();
	Animal* dog = new Dog();

	delete cat;
	delete dog;

	int n = 4;
	Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
	for (int i = 0; i < n; i++) animals[i]->makeSound();
	for (int i = 0; i < n; i++) delete animals[i];
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
