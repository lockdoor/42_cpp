/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 06:35:19 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/19 06:38:57 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER
#define SCALARCONVERTER

#include <string>

class ScalarConverter
{
private:
	ScalarConverter(/* args */);
public:
	void static convert(std::string const & src);
	~ScalarConverter();
};

#endif
