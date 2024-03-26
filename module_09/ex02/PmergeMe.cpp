/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 06:55:30 by pnamnil           #+#    #+#             */
/*   Updated: 2024/03/26 07:01:13 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>
#include <string>
#include <stdexcept>

/* constructor */
template<typename Container, typename Pair, typename T>
PmergeMe<Container, Pair, T>::PmergeMe(/* args */) : _useTime(0) {}

template<typename Container, typename Pair, typename T>
PmergeMe<Container, Pair, T>::PmergeMe(int argc, char **argv) : _useTime(0)
{
	//handle positive number and overflow integer only
	for (int i = 1; i < argc; i++) {
		std::string arg = argv[i];
		if (arg.empty()) {
			throw (std::invalid_argument("Wrong Argument has no digit"));
		}
		for (size_t j = 0; j < arg.length(); j++) {
			if (!std::isdigit(arg[j])) {
				throw (std::invalid_argument("Wrong Argument has no digit"));	
			}
		}
		long n = std::atol(argv[i]);
		if (n > std::numeric_limits<int>::max()) {
			throw (std::invalid_argument("Wrong Argument found overflow"));
		}
		_data.push_back(static_cast<int>(n));
	}
}

template<typename Container, typename Pair, typename T>
PmergeMe<Container, Pair, T>::PmergeMe(PmergeMe<Container, Pair, T> const &rhs)
{
	*this = rhs;
}
template<typename Container, typename Pair, typename T>
PmergeMe<Container, Pair, T> & PmergeMe<Container, Pair, T>::operator=(PmergeMe<Container, Pair, T> const &rhs)
{
	if (this != &rhs) {
		_data.clear();
		_data = rhs._data;
		_useTime = rhs._useTime;
	}
	return (*this);
}

template<typename Container, typename Pair, typename T>
PmergeMe<Container, Pair, T>::~PmergeMe()
{
}

/* member function public */
template<typename Container, typename Pair, typename T>
double PmergeMe<Container, Pair, T>::getUseTime()const
{
	return (_useTime);
}

template<typename Container, typename Pair, typename T>
std::size_t PmergeMe<Container, Pair, T>::getSize()const
{
	return (_data.size());
}

template<typename Container, typename Pair, typename T>
bool PmergeMe<Container, Pair, T>::isSort()
{
	for (size_t i = 1; i < _data.size(); i++) {
		if (_data[i] < _data[i - 1]) return (false);
	}
	return (true);
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
	//time management
	std::clock_t start = std::clock();
	
	if (_data.size() <= 1) return;
	
	// keep odd
	T	remain;
	bool isOdd = _data.size() % 2;
	if (isOdd) {remain = _data.back(); _data.pop_back();}
	
	// make Pairs, return new Container of Pair
	Pair pairs = __makePairs();
	
	__mergeSortPairs(pairs);

	_data.clear();

	// insert first of pair to data
	_data.push_back(pairs[0].first);
	for (size_t i = 0; i < pairs.size(); i++) {
		_data.push_back(pairs[i].second);
	}

	// insert second of pair to data
	for (size_t i = 1; i < pairs.size(); i++) {
		size_t pos = __positionByBinarySearch(pairs[i].first);
		_data.insert(_data.begin() + pos, pairs[i].first);
	}

	// insert remain
	if (isOdd) {
		size_t pos = __positionByBinarySearch(remain);
		_data.insert(_data.begin() + pos, remain);
	}

	//time management
	std::clock_t end = std::clock();
	_useTime = 1000.0 * (end - start) / CLOCKS_PER_SEC;
}

/* member function private */
template<typename Container, typename Pair, typename T>
size_t PmergeMe<Container, Pair, T>::__positionByBinarySearch(T needle)
{
	int left = 0;
	int right = _data.size() - 1;

	while (left <= right) {
		int mid = (left + right) / 2;
		if (_data[mid] == needle) return (mid);
		if (_data[mid] < needle) left = mid + 1;
		else right = mid - 1;
	}
	return (left);
}

template<typename Container, typename Pair, typename T>
Pair PmergeMe<Container, Pair, T>::__makePairs()
{
	Pair pairs;
	for (size_t i = 0; i < _data.size(); i+=2) {
		if (_data[i] > _data[i + 1]) {
			std::swap(_data[i], _data[i + 1]);
		}
		std::pair<T, T> p(_data[i], _data[i + 1]);
		
		pairs.push_back(p);
	}
	return (pairs);
}

//use merge sort
template<typename Container, typename Pair, typename T>
void PmergeMe<Container, Pair, T>::__mergeSortPairs(Pair &pairs)
{
	if (pairs.size() <= 1) return;
	
	size_t half = pairs.size() / 2;
	Pair left = Pair(pairs.begin(), pairs.begin() + half);
	Pair right = Pair(pairs.begin() + half, pairs.end());

	__mergeSortPairs(left);
	__mergeSortPairs(right);
	
	pairs.clear();
	size_t l = 0;
	size_t r = 0;
	while (l < left.size() && r < right.size()) {
		if (left[l].second <= right[r].second) {
			pairs.push_back(left[l]);
			l++;
		} else {
			pairs.push_back(right[r]);
			r++;
		}
	}
	while (l < left.size()) {
		pairs.push_back(left[l]);
		l++;
	}
	while (r < right.size()) {
		pairs.push_back(right[r]);
		r++;
	}
}

template<typename Container, typename Pair, typename T>
void PmergeMe<Container, Pair, T>::__showPairs(Pair &pairs)
{
	for (size_t i = 0; i < pairs.size(); i++) {
		std::cout << "<" << pairs[i].first << "," << pairs[i].second << ">, ";
	}
	std::cout << std::endl;
}
