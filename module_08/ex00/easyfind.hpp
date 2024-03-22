/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 06:56:25 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/27 07:09:42 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <algorithm>
#include <iostream>
#include <stdexcept>

template<typename T>
int easyfind(T v, int n)
{
    typename T::iterator it = std::find(v.begin(), v.end(), n);
    if (it == v.end()) throw (std::runtime_error(": Not found "));
    return (*it);
}

#endif
