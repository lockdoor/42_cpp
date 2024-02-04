/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 08:16:36 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/04 15:02:07 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	int	n = 5;
	Zombie	*zombie = zombieHorde(n, "Bob");
	for (int i = 0; i < n; i++) zombie[i].announce();
	delete [] zombie;
	return (0);
}
