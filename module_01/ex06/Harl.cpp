/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:02:07 by pnamnil           #+#    #+#             */
/*   Updated: 2024/01/29 13:03:02 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl(/* args */)
{
}

Harl::~Harl()
{
}

void Harl::__debug(void)
{
	std::string msg("I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!");
	std::cout << msg << std::endl;
}

void Harl::__info(void)
{
	std::string msg("I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn’t be asking for more!");
	std::cout << msg << std::endl;
}

void Harl::__warning(void)
{
	std::string msg("I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.");
	std::cout << msg << std::endl;
}

void Harl::__error(void)
{
	std::string msg("This is unacceptable! I want to speak to the manager now.");
	std::cout << msg << std::endl;
}

void Harl::complain(std::string level)
{
	std::string	strs[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::string str = level;
	for(std::size_t i = 0; i < str.length(); i++) 
		str[i] = std::toupper(str[i]);
	int	index = -1;
	for(int i = 0; i < 4; i++){
		if (str == strs[i]) index = i;
	}
	switch(index){
		case 0: __debug();
		case 1: __info();
		case 2: __warning();
		case 3: __error(); break;
		default: std::cout << "No action for this level" << std::endl;
	}
}
