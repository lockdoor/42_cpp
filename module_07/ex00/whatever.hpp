/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 10:29:28 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/23 11:17:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
void swap(T &a, T &b)
{
	T c = a;
	a = b;
	b = c;
}

template<typename T>
T const & min(T const &a, T const &b)
{
	return a < b ? a : b;
}

template<typename T>
T const & max(T const &a, T const &b)
{
	return a > b ? a : b;
}
