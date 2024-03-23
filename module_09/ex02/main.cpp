/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 07:01:01 by pnamnil           #+#    #+#             */
/*   Updated: 2024/03/23 11:58:51 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.cpp"
#include <vector>

int main(void)
{
	PmergeMe<std::vector<int>, int> v;
	
	v.push_back(5);
	v.push_back(2);
	v.push_back(10);
	v.push_back(50);
	v.push_back(20);
	v.push_back(30);
	v.push_back(15);
	v.push_back(8);
	v.showDatas();
	return (0);
}
