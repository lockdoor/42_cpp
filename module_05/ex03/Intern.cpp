/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 16:27:01 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/13 17:08:37 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "debug.hpp"
#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

/* =============== constructor ================== */

Intern::Intern(void)
{
	_form[0] = "shrubbery create";
	_form[1] = "robotomy request";
	_form[2] = "pressidential pardon";
	if (DEBUG_MODE)
		std::cout << "Intern constructor called" << std::endl;
}

Intern::Intern(Intern const &rhs)
{
	for(int i = 0; i < 3; i++){
		_form[i] = rhs.getForm(i);
	}
	if (DEBUG_MODE)
		std::cout << "Intern copy constructor called" << std::endl;
}

Intern::~Intern()
{
	if (DEBUG_MODE)
		std::cout << "Intern destructor called" << std::endl;
}

/* =============== overload function ================== */

Intern & Intern::operator=(Intern const &rhs)
{
	(void) rhs;
	if (DEBUG_MODE)
		std::cout << "Intern copy assignment called" << std::endl;
	return (*this);
}

/* =============== member function ================== */
AForm * Intern::makeForm(std::string const &form, std::string const &target)
{
	int idx = -1;
	for(int i = 0; i < 3; i++){
		if (_form[i] == form) {
			idx = i;
			break ;
		}
	}
	switch (idx)
	{
		case 0: {
				std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
				return (new ShrubberyCreationForm(target));
			}
		case 1: {
				std::cout << "Intern creates RobotomyRequestForm" << std::endl;
				return (new RobotomyRequestForm(target));
			}
		case 2: {
				std::cout << "Intern creates PresidentialPardonForm" << std::endl;
				return (new PresidentialPardonForm(target));
			}
		default: {
				std::cerr << "Intern can not create Form " << form << std::endl;
				return (NULL);
		}
	}
}

std::string const & Intern::getForm(int idx) const
{
	return (_form[idx]);
}
