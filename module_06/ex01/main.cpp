/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 09:07:54 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/22 09:43:42 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int main(void)
{
	Data *data = new Data();
	data->name = "42Bangkok";
	uintptr_t raw = Serializer::serialize(data);
	std::cout << "raw: " << raw << std::endl;
	data = Serializer::deserialize(raw);
	std::cout << "data->name: " << data->name << std::endl;
	delete data; 
	return (0);
}

/*
int main(void)
{
	Data *data = new Data();
	data->name = "42Bangkok";
	uintptr_t raw = static_cast<uintptr_t>(data);
	std::cout << "raw: " << raw << std::endl;
	data = static_cast<Data*>(raw);
	std::cout << "data->name: " << data->name << std::endl;
	delete data; 
	return (0);
}
*/