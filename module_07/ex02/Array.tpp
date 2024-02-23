/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:00:25 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/23 16:47:09 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <stdexcept>
#include <iostream>

template<typename T>
Array<T>::Array(/* args */): _datas(new T[1]), _size(1) {}

template<typename T>
Array<T>::Array(unsigned int size): _datas(new T[size]), _size(size) {}

template<typename T>
Array<T>::Array(Array const &rhs) {
	_size = rhs.size();
	_datas = new T[_size];
	for (unsigned int i = 0; i < _size; i++) {
		_datas[i] = rhs[i];
	}
}

template<typename T>
Array<T>::~Array() { delete [] _datas;}

/* overload operator */
template<typename T>
Array<T> & Array<T>::operator=(Array const &rhs)
{
	if (this != rhs) {
		delete [] _datas;
		_size = rhs.size();
		_datas = new T[_size];
		for (unsigned int i = 0; i < _size; i++) {
			_datas[i] = rhs[i];
		}
	}
	return (*this);
}

template<typename T>
const T& Array<T>::operator[](unsigned int idx) const {
	if (idx < _size) return (_datas[idx]);
	else throw std::runtime_error("Index out of bounds");
}

template<typename T>
T& Array<T>::operator[](unsigned int idx){
	if (idx < _size) return (_datas[idx]);
	else throw std::runtime_error("Index out of bounds");
}


/* member function */
template<typename T>
unsigned int Array<T>::size(void) const {
	return (_size);
}
