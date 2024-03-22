/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 07:12:07 by pnamnil           #+#    #+#             */
/*   Updated: 2024/03/02 09:04:50 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <set>
#include <iostream>

class Span
{
private:
	std::set<int>	_data;
	unsigned int	_size;
	Span(/* args */);
public:
	Span(unsigned int n);
	Span(Span const &rhs);
	~Span();

	/* overload operator */
	Span & operator=(Span const &rhs);

	void addNumber(int n);
	void addNumber(std::set<int>::iterator a, std::set<int>::iterator b);
	// void showNumber(void) const;
	int longestSpan() const;
	int shortestSpan() const;
	std::set<int>::iterator begin() const;
	std::set<int>::iterator end() const;
	void clear(void);
};

std::ostream & operator<<(std::ostream &o, Span const &i);

#endif