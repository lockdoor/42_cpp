/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 06:55:30 by pnamnil           #+#    #+#             */
/*   Updated: 2024/03/24 10:39:29 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>
// #include <pair>

/* constructor */
template<typename Container, typename Pair, typename T>
PmergeMe<Container, Pair, T>::PmergeMe(/* args */)
{
	
}

template<typename Container, typename Pair, typename T>
PmergeMe<Container, Pair, T>::~PmergeMe()
{
}


/* member function */
template<typename Container, typename Pair, typename T>
void PmergeMe<Container, Pair, T>::push_back(T arg)
{
	_data.push_back(arg);
}

template<typename Container, typename Pair, typename T>
void PmergeMe<Container, Pair, T>::showDatas()
{
	typename Container::const_iterator it = _data.begin();
	while (it != _data.end())
		std::cout << *it++ << " ";
	std::cout << std::endl;
}

template<typename Container, typename Pair, typename T>
void PmergeMe<Container, Pair, T>::sort()
{
	// keep odd
	T	remain;
	bool isOdd = _data.size() % 2;
	if (isOdd) {remain = _data.back(); _data.pop_back();}
	
	// make Pairs, return new Container of Pair
	Pair pairs = __makePairs();
	showDatas();
	
	// sort pairs
	__sortPairs(pairs);
	__showPairs(pairs);
	
	// clear old data

	// insert second of pair to data
	
	// binary search to find position of first of pair

	// insert first of pair to right position

}

template<typename Container, typename Pair, typename T>
Pair PmergeMe<Container, Pair, T>::__makePairs()
{
	Pair pairs;
	for (size_t i = 0; i < _data.size(); i+=2) {
		if (_data[i] > _data[i + 1]) std::swap(_data[i], _data[i + 1]);
		std::pair<T, T> p(_data[i], _data[i + 1]);
		pairs.push_back(p);
	}
	return (pairs);
}

//use merge sort
template<typename Container, typename Pair, typename T>
void PmergeMe<Container, Pair, T>::__sortPairs(Pair &pairs)
{
	// std::swap(pairs[0], pairs[1]);
	if (pairs.size() <= 1) return;
	
	size_t half = pairs.size() / 2;
	Pair left = Pair(pairs.begin(), pairs.begin() + half);
	Pair right = Pair(pairs.begin() + half, pairs.end());

	__sortPairs(left);
	__sortPairs(right);
	
	pairs.clear();
	size_t l = 0;
	size_t r = 0;
	size_t size = left.size();
	while (l < size && r < size) {
		if (left[l].second < right[r].second) {
			pairs.push_back(left[l]);
			l++;
		} else {
			pairs.push_back(right[r]);
			r++;
		}
	}
	while (l < size) {
		pairs.push_back(left[l]);
		l++;
	}
	while (r < size) {
		pairs.push_back(right[r]);
		r++;
	}
}

template<typename Container, typename Pair, typename T>
void PmergeMe<Container, Pair, T>::__showPairs(Pair &pairs)
{
	for (size_t i = 0; i < pairs.size(); i++) {
		std::cout << pairs[i].first << " " << pairs[i].second << " ";
	}
	std::cout << std::endl;
}
