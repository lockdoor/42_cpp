/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 07:43:52 by pnamnil           #+#    #+#             */
/*   Updated: 2024/03/03 09:00:15 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

void normalTest(void)
{
	Span span(5);

	try {
		span.addNumber(6);
		span.addNumber(3);
		span.addNumber(17);
		span.addNumber(9);
		span.addNumber(11);
		std::cout << span << std::endl;
		std::cout << span.shortestSpan() << std::endl;
		std::cout << span.longestSpan() << std::endl;
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

void copyTest(void)
{
	Span span1(5);
	Span span2(5);
	
	try {
		span1.addNumber(6);
		span1.addNumber(3);
		span1.addNumber(17);
		span1.addNumber(9);
		span1.addNumber(11);
		span2 = span1;
		std::cout << span1 << std::endl;
		std::cout << span1.shortestSpan() << std::endl;
		std::cout << span1.longestSpan() << std::endl;
		std::cout << span2 << std::endl;
		std::cout << span2.shortestSpan() << std::endl;
		std::cout << span2.longestSpan() << std::endl;
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

void manyInsert(void)
{
	Span span1(10);
	Span span2(5);
	
	try {
		span1.addNumber(6);
		span1.addNumber(3);
		span1.addNumber(17);
		span1.addNumber(9);
		span1.addNumber(11);
		
		span2.addNumber(-6);
		span2.addNumber(-3);
		span2.addNumber(-17);
		span2.addNumber(-9);
		span2.addNumber(-11);
		
		span1.addNumber(span2.begin(), span2.end());
		std::cout << span1 << std::endl;
		std::cout << span1.shortestSpan() << std::endl;
		std::cout << span1.longestSpan() << std::endl;
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

void errorTest(void)
{
	Span a(2);
	Span b(4);
	
	try {
		try {
			a.addNumber(1);
			a.addNumber(2);
			a.addNumber(3); // Can not addNumber because overflow capacity
		} catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}

		try {
			a.clear();
			a.addNumber(2);
			a.addNumber(2); // Number already existed
		} catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}

		try {
			a.clear();
			a.addNumber(2);
			a.addNumber(2); // Number already existed
		} catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
			
		try {
			a.clear();
			a.addNumber(1);
			a.addNumber(2);
			b.addNumber(-1);
			b.addNumber(-2);
			b.addNumber(-3);
			b.addNumber(a.begin(), a.end()); // Can not addNumber because overflow capacity
		} catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		
		/* do not test this case */
		// try {
		// 	Span c(10);
		// 	c.addNumber(a.begin(), b.end());
		// } catch (const std::exception &e) {
		// 	std::cerr << e.what() << std::endl;
		// }
		
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

int main(void)
{
	normalTest();
	// copyTest();
	// manyInsert();
	// errorTest();
	return (0);
}
