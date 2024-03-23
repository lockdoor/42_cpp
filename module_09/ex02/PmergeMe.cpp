/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 06:55:30 by pnamnil           #+#    #+#             */
/*   Updated: 2024/03/23 17:21:00 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>
// #include <pair>

/* constructor */
template<class container, typename T>
PmergeMe<container, T>::PmergeMe(/* args */)
{
	
}

template<class container, typename T>
PmergeMe<container, T>::~PmergeMe()
{
}


/* member function */
template<class container, typename T>
void PmergeMe<container, T>::push_back(T arg)
{
	_data.push_back(arg);
}

template<class container, typename T>
void PmergeMe<container, T>::showDatas()
{
	typename container::const_iterator it = _data.begin();
	while (it != _data.end())
		std::cout << *it++ << " ";
	std::cout << std::endl;
}

template<class container, typename T>
void PmergeMe<container, T>::sort()
{
	// keep odd
	T	remain;
	bool isOdd = _data.size() % 2;
	if (isOdd) {remain = _data.back(); _data.pop_back()}
	
	// make pair and sort pair, return new container of pair
	

	// clear old data

	// insert second of pair to data
	
	// binary search to find position of first of pair

	// insert first of pair to right position

}
