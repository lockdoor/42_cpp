/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:51:23 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/09 18:39:54 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main(void)
{
	// const Animal *cat1 = new Cat();
	// Animal *cat2 = new Animal(*cat1);
	// Animal *cat3 = new Cat();
	// *cat2 = Animal(*cat3);
	// delete cat1;
	// delete cat2;
	// delete cat3;

	Animal* cat = new Cat();
	Animal* dog = new Dog();

	delete cat;
	delete dog;

	int n = 4;
	Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
	for (int i = 0; i < n; i++) {
		delete animals[i];
	}
	
	return (0);
}
