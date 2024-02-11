/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 07:42:46 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/11 16:26:06 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include <iostream>
#include "MateriaSource.hpp"

/* 1. test Amateria copy and clone */
/*
int main(void)
{	
	AMateria *mtr1 = new Ice();
	std::cout << mtr1->getType() << std::endl;
	std::cout << std::endl;

	AMateria *mtr2 = new Cure();
	std::cout << mtr2->getType() << std::endl;
	std::cout << std::endl;

	// can not copy Ice sub class to Amateria 
	// Amateria *ice3 = Ice(ice1);

	// can not use Amateria to create instance becouse it is abstract class
	// Amateria *ice3 = Amateria(*ice1);
	
	// use clone it is virtual funtion of ice it return Ice with Vtable of Ice
	AMateria *mtr3 = mtr2->clone();
	*mtr3 = *mtr1;
	std::cout << mtr3->getType() << std::endl;
	std::cout << std::endl;
	
	delete mtr1;
	delete mtr2;
	delete mtr3;

	std::cout << std::endl << "========== copy test =============" << std::endl;
	std::cout << std::endl;
	Ice ice1;
	std::cout << std::endl;
	Ice ice2(ice1);
	std::cout << std::endl;
	Ice ice3;
	ice3 = ice1;
	std::cout << std::endl;

	Cure cure1;
	std::cout << std::endl;
	Cure cure2(cure1);
	std::cout << std::endl;
	Cure cure3;
	cure3 = cure1;
	std::cout << std::endl;
	return (0);
}
*/

/* ICharacter unit test */
// int main(void)
// {
// 	ICharacter *bob = new Character()
// 	return (0);
// }


/* ImateriaSource unit test */

void testMateriaSourceCreate(IMateriaSource *src, std::string const &item)
{
	AMateria *tmp = src->createMateria(item);
	if (tmp) {
		std::cout << "tmp->type: " << tmp->getType() << std::endl << std::endl;
		delete tmp;
	}
	std::cout << std::endl;
}

int main(void)
{
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	std::cout << std::endl;
	src->learnMateria(new Ice());
	std::cout << std::endl;
	src->learnMateria(new Cure());
	std::cout << std::endl;
	src->learnMateria(new Cure());
	std::cout << std::endl;
	src->learnMateria(new Cure());
	std::cout << std::endl;
	testMateriaSourceCreate(src, "ice");
	testMateriaSourceCreate(src, "cure");
	testMateriaSourceCreate(src, "fire");
	delete src;

	std::cout << "============ copy test ==============" << std::endl;
	MateriaSource src1;
	std::cout << std::endl;
	
	src1.learnMateria(new Ice());
	std::cout << std::endl;
	
	src1.learnMateria(new Cure());
	std::cout << std::endl;
	
	MateriaSource src2 = MateriaSource(src1);
	std::cout << std::endl;
	
	testMateriaSourceCreate(&src2, "ice");

	testMateriaSourceCreate(&src2, "cure");
	std::cout << "============ copy assignment test ==============" << std::endl;
	MateriaSource src3;
	std::cout << std::endl;
	
	src3 = src1;
	std::cout << std::endl;
	
	testMateriaSourceCreate(&src2, "ice");
	
	testMateriaSourceCreate(&src2, "cure");

	std::cout << "====== test learn same object ===== " << std::endl;
	AMateria *mtr = new Ice();
	std::cout << std::endl;
	
	IMateriaSource *src4 = new MateriaSource();
	std::cout << std::endl;
	
	src4->learnMateria(mtr);
	std::cout << std::endl;
	
	src4->learnMateria(mtr);
	std::cout << std::endl;

	src4->learnMateria(NULL);
	std::cout << std::endl;
	
	delete src4;
	return (0);
}
