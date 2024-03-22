/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 13:24:55 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/27 07:01:43 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <iostream>

template <typename T>
void testfind(T v, int n)
{
	try {
		std::cout << easyfind(v, n) << ": founded in container" << std::endl;
	} catch (const std::exception &e) {
		std::cerr << n << e.what() << std::endl;
	}
}

int main(void)
{
	std::cout << "===== test vecter =====" << std::endl;
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	testfind(v, 3);
	testfind(v, 5);

	std::cout << "===== test list =====" << std::endl;
	std::list<int> l;
	l.push_front(1);
	l.push_front(2);
	l.push_back(3);
	testfind(l, 2);
	testfind(l, 4);

	std::cout << "===== test deque =====" << std::endl;
	std::deque<int> d;
	d.push_front(1);
	d.push_front(2);
	d.push_back(3);
	testfind(d, 1);
	testfind(d, -5);

	return (0);
}