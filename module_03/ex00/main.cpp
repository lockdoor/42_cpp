/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:56:52 by pnamnil           #+#    #+#             */
/*   Updated: 2024/01/31 15:19:36 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main(void)
{
	std::string n = "gun";
	ClapTrap a("axe");
	ClapTrap b;
	b = a;
	b.setName("knife");
	std::cout << a.getName() << &a.getName() << " | " << &a << std::endl;
	std::cout << b.getName() << &b.getName() << " | " << &b << std::endl;
	b.setName(n);
	std::cout << b.getName() << &b.getName() << " | " << &b << std::endl;
	return (0);
}