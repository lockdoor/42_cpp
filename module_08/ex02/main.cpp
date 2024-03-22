/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 09:23:14 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/29 11:17:16 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <string>

template<typename T>
void test(MutantStack<T> &mst)
{
	std::cout << "top of stack: " << mst.top() << std::endl;
	std::cout << "size of stack " << mst.size() << std::endl;

	std::cout << "test pop stack 1 time " << std::endl;
	mst.pop();
	
	std::cout << "top of stack: " << mst.top() << std::endl;
	std::cout << "size of stack: " << mst.size() << std::endl;

	std::cout << "test iterator" << std::endl;
	typename MutantStack<T>::iterator it = mst.begin();
	typename MutantStack<T>::iterator ite = mst.end();
	for (; it != ite; it++)
		std::cout << *it << "," ;
	std::cout << std::endl;
}

int main(void)
{
	std::cout << "==== test int ====" << std::endl;
	MutantStack<int> mst;
	mst.push(1);
	mst.push(2);
	mst.push(3);
	mst.push(4);
	mst.push(5);
	test(mst);

	std::cout << std::endl << "==== test string ====" << std::endl;
	MutantStack<std::string> mstr;
	mstr.push("one");
	mstr.push("two");
	mstr.push("three");
	mstr.push("four");
	mstr.push("five");
	test(mstr);

	return(0);
}
