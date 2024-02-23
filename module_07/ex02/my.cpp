/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:29:14 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/23 16:41:43 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"
#include <iostream>
#include <exception>

int main(void)
{
	Array<int> n(10);
	
	try {
		std::cout << n[10] << std::endl;
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	for (unsigned int i = 0; i < n.size(); i++) {
		n[i] = i;
		std::cout << n[i] << std::endl;
	}

	Array<int> m(n);
	for (unsigned int i = 0; i < m.size(); i++) {
		std::cout << m[i] << std::endl;
	}

	Array<int> arr = m;
	for (unsigned int i = 0; i < m.size(); i++) {
		std::cout << m[i] << std::endl;
	}
	return (0);
}