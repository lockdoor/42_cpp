/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:21:10 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/23 14:35:09 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Num {
private:
	int _data;
public:
	Num(void): _data(42){}
	~Num(void){}
	int getData()const {return _data;}
};

std::ostream & operator<<(std::ostream &o, Num const &i)
{
	o << i.getData();
	return (o);
}

// can use all type of array
template<typename T, typename F>
void iter(T arr, unsigned int n, F func)
{
	for (unsigned int i = 0; i < n; i++) {
		func(arr[i]);
	}
}

template<typename T>
void print(T el)
{
	std::cout << el << " ";
}
