/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:35:50 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/24 12:18:05 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename T>
void print(T &el)
{
	std::cout << el << " ";
}

int main(void)
{
	int n[] = {1,2,3,4,5,6};
	iter(n, 5, print<int>);
	std::cout << std::endl;

	Num num[5];
	iter(num, 5, print<Num>);
	std::cout << std::endl;

	int m[] ={1,2,3,4,5,6};
	iter(m, 5, print<const int>);
	std::cout << std::endl;

	std::string strs[5];
	strs[0] = "One";
	strs[1] = "Two";
	strs[2] = "Three";
	strs[3] = "Four";
	strs[4] = "Five";
	iter(strs, 5, print<std::string>);
	std::cout << std::endl;
	return (0);
}
