/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 06:35:19 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/22 11:39:13 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER
#define SCALARCONVERTER

#include <string>

class ScalarConverter
{
private:
	ScalarConverter(/* args */);
	ScalarConverter(ScalarConverter const &rhs);
	ScalarConverter & operator=(ScalarConverter const &rhs);
public:
	void static convert(std::string const & src);
	~ScalarConverter();
};

#endif
