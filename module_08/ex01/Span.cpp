/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 07:15:56 by pnamnil           #+#    #+#             */
/*   Updated: 2024/03/02 09:05:58 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <climits>

/* constructor */

Span::Span(/* args */) {}

Span::Span(unsigned int n) : _size(n) {}

Span::Span(Span const &rhs)
{
	*this = rhs;
}

Span::~Span() {}

/* overload operator */

std::ostream & operator<<(std::ostream &o, Span const &i)
{
	std::set<int>::iterator it = i.begin();
	std::set<int>::iterator ite = i.end();
	for (; it != ite; it++) {
		std::cout << *it << ",";
	}
	// std::cout << std::endl;
	return (o);
}

Span & Span::operator=(Span const &rhs)
{
	if (this != &rhs) {
		_data.clear();
		std::set<int>::iterator it = rhs.begin();
		std::set<int>::iterator ite = rhs.end();
		for (; it != ite; it++) {
			_data.insert(*it);
		}
	}
	return(*this);
}

/* member function */

std::set<int>::iterator Span::begin() const
{
	return (_data.begin());
}

std::set<int>::iterator Span::end() const
{
	return (_data.end());
}

void Span::clear(void)
{
	_data.clear();
}

void Span::addNumber(int n)
{
	if (_data.size() == _size)
		throw (std::length_error("Can not addNumber because overflow capacity"));
	if (_data.count(n) != 0)
		throw (std::runtime_error("Number already existed"));
	_data.insert(n);
}

void Span::addNumber(std::set<int>::iterator a, std::set<int>::iterator b)
{
	int n = 0;
	
	for (std::set<int>::iterator it = a; it != b; it++) n++;
	if (_data.size() + n > _size)
		throw (std::length_error("Can not addNumber because overflow capacity"));
	for (std::set<int>::iterator it = a; it != b; it++)
		addNumber(*it);
}

//handle amount of size 0, 1
int Span::longestSpan(void) const
{
	if (_data.size() < 2)
		throw (std::logic_error("Can not do this funtion because data less then 2"));
	std::set<int>::iterator min = _data.begin();
	std::set<int>::reverse_iterator max = _data.rbegin();
	return (*max - *min);
}

//handle amount of size 0, 1
int Span::shortestSpan(void) const
{
	if (_data.size() < 2)
		throw (std::logic_error("Can not do this funtion because data less then 2"));
	int sh = INT_MAX;
	std::set<int>::iterator it = _data.begin();
	std::set<int>::iterator ite = _data.end();
	while (it != ite) {
		int a = *it;
		if (++it == ite) break;
		a = *it - a;
		sh = sh > a ? a : sh;
	}
	return (sh);
}
