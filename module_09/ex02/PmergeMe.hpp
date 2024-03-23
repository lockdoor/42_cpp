/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 06:29:19 by pnamnil           #+#    #+#             */
/*   Updated: 2024/03/23 12:15:46 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <iostream>

template<class container, typename T>
class PmergeMe {
private:
	container _data;
    // PmergeMe();
public:
    // Constructor
	PmergeMe();
    // Destructor
    ~PmergeMe();

    // Member function declaration
    void showDatas();
	void push_back(T);
	void sort();
};

#endif
