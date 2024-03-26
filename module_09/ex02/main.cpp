/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 07:01:01 by pnamnil           #+#    #+#             */
/*   Updated: 2024/03/26 07:05:13 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.cpp"
#include <vector>
#include <deque>
#include <iostream>

/* test copy constructor */
/*
int main(int argc, char **argv)
{
	if (argc < 2) {
		std::cout << "Pmerge: require argument" << std::endl;
		return (1);
	}
	try {
		PmergeMe<std::vector<int>, std::vector<std::pair<int, int> >, int> vec1(argc, argv);
		PmergeMe<std::vector<int>, std::vector<std::pair<int, int> >, int> vec2;
		PmergeMe<std::deque<int>, std::deque<std::pair<int, int> >, int> dec1(argc, argv);
		PmergeMe<std::deque<int>, std::deque<std::pair<int, int> >, int> dec2(dec1);
		vec2 = vec1;
		vec1.showDatas();
		vec2.showDatas();
		dec1.showDatas();
		dec2.showDatas();
	} 
	catch (std::exception const &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
*/

int main(int argc, char **argv)
{
	if (argc < 2) {
		std::cout << "Pmerge: require argument" << std::endl;
		return (1);
	}
	try{
		PmergeMe<std::vector<int>, std::vector<std::pair<int, int> >, int> vec(argc, argv);
		PmergeMe<std::deque<int>, std::deque<std::pair<int, int> >, int> deq(argc, argv);
		std::cout << "Before: ";
		vec.showDatas();
		vec.sort();
		deq.sort();
		std::cout << "After: ";
		vec.showDatas();
		if (!vec.isSort() || !deq.isSort()) throw (std::logic_error("Non Sort"));
		std::cout << "Time to process a range of " 
			<< vec.getSize()
			<< " elements with std::vector : " 
			<< vec.getUseTime() << " ms" << std::endl;
		std::cout << "Time to process a range of " 
			<< deq.getSize()
			<< " elements with std::deque : " 
			<< deq.getUseTime() << " ms" << std::endl;		
	}
	catch (std::exception const &e) {
		std::cout << e.what() << std::endl;
	}
}
