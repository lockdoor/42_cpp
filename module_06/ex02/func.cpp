/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 11:14:49 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/22 11:30:48 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

Base *generate(void)
{
	srand(time(NULL));
	size_t n = rand() % 3;
	switch (n)
	{
		case 0: return (new A);
		case 1: return (new B);
		default: return (new C);
	}
	return (NULL); 
}

void identity(Base *p)
{
	if (dynamic_cast<A*>(p)) std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(p)) std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(p)) std::cout << "C" << std::endl;
}

void identity(Base &p)
{
	if (dynamic_cast<A*>(&p)) std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(&p)) std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(&p)) std::cout << "C" << std::endl;
}
