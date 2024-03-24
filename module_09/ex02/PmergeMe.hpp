/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 06:29:19 by pnamnil           #+#    #+#             */
/*   Updated: 2024/03/24 09:49:24 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <iostream>

template<typename Container, typename Pair, typename T>
class PmergeMe {
private:
	Container _data;
    // PmergeMe
public:
    // Constructor
	PmergeMe();
    // Destructor
    ~PmergeMe();

    // Member function declaration
    void showDatas();
	void push_back(T);
	void sort();

private:
    Pair __makePairs();
    void __sortPairs(Pair &pairs);
    void __showPairs(Pair &pairs);
};

#endif
