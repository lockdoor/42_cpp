/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unitTestAMateria.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 06:19:45 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/12 06:24:10 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int unitTestAMateria(void)
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