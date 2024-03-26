/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 06:29:19 by pnamnil           #+#    #+#             */
/*   Updated: 2024/03/26 07:00:11 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <iostream>
#include <string>

template<typename Container, typename Pair, typename T>
class PmergeMe {
private:
	Container _data;
    double  _useTime;

public:
    // Constructor
	PmergeMe();
    PmergeMe(int argc, char **argv);
    PmergeMe(PmergeMe<Container, Pair, T> const &rhs);
    PmergeMe<Container, Pair, T> & operator=(PmergeMe<Container, Pair, T> const &rhs);
    ~PmergeMe();

    // Member function declaration
    void showDatas();
	void sort();
    bool isSort();
    double getUseTime() const;
    std::size_t getSize() const;

private:
    Pair __makePairs();
    void __mergeSortPairs(Pair &pairs);
    void __showPairs(Pair &pairs);
    size_t __positionByBinarySearch(T needle);
};

#endif
