/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:51:23 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/12 10:06:55 by pnamnil          ###   ########.fr       */
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
	std::cout << "=========== delete ============" << std::endl;
	delete animal;
	delete dog;
	delete cat;

	std::cout << "=========== copy ============" << std::endl;
	const Animal *dog1 = new Dog();
	Animal *dog2 = new Animal(*dog1);
	Animal dog3;
	dog3 = *dog2;
	std::cout << dog1 << " : " << dog2 << " : " << &dog3 << std::endl;
	std::cout << "dog1 type  : " << dog1->getType() << std::endl;
	std::cout << "dog2 type  : " << dog2->getType() << std::endl;
	std::cout << "dog3 type  : " << dog3.getType() << std::endl;
	std::cout << "dog1 make sound" << std::endl;
	dog1->makeSound();
	std::cout << "dog2 make sound" << std::endl;
	dog2->makeSound();
	std::cout << "dog3 make sound" << std::endl;
	dog3.makeSound();

	std::cout << "=========== delete ============" << std::endl;
	delete dog1;
	delete dog2;

	/*
	std::cout << "=========== incorrect ============" << std::endl;
	const WrongAnimal *wrongAnimal = new WrongAnimal();
	const WrongAnimal *wrongCat = new WrongCat();
	wrongAnimal->makeSound();
	wrongCat->makeSound();
	delete wrongAnimal;
	delete wrongCat;
	*/
	return (0);
}
