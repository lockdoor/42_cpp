/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unitTestIMateriaSource.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 06:06:06 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/12 06:10:09 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void testMateriaSourceCreate(IMateriaSource *src, std::string const &item)
{
	AMateria *tmp = src->createMateria(item);
	if (tmp) {
		std::cout << "tmp->type: " << tmp->getType() << std::endl << std::endl;
		delete tmp;
	}
	std::cout << std::endl;
}

int unitTestIMateriaSource(void)
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