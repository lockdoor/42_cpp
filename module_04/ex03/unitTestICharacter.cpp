/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unitTestICharacter.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 06:22:06 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/12 08:11:23 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int unitTestICharacter(void)
{
	ICharacter *bob = new Character("bob");
	std::cout << std::endl;

	ICharacter *ray = new Character("ray");
	std::cout << std::endl;

	AMateria *ice = new Ice();
	std::cout << std::endl;	

	AMateria *cure = new Cure();
	std::cout << std::endl;	
	
	bob->equip(ice);
	std::cout << std::endl;
	
	bob->equip(ice);
	std::cout << std::endl;

	bob->equip(NULL);
	std::cout << std::endl;

	bob->equip(cure);
	std::cout << std::endl;

	bob->equip(new Ice());
	std::cout << std::endl;

	bob->equip(new Cure());
	std::cout << std::endl;
	
	Ice ice2;
	bob->equip(&ice2);
	std::cout << std::endl;
	

	for (int i = 0; i < SLOT_SIZE; i++) {
		bob->use(i, *ray);
		std::cout << std::endl;	
	}

	delete bob;
	delete ray;
	return (0);
}
