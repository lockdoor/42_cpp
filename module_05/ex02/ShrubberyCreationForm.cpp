/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 10:28:15 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/18 06:55:58 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "debug.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

/*============================== constructor ===========================*/

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) :
	AForm("ShrubberyCreationForm", 145, 137),
	_target(target)	
{
	if (DEBUG_MODE)
		std::cout << "ShrubberyCreationForm " << _target << " constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &rhs) :
	AForm(rhs), _target(rhs.getTaget())
{
	if (DEBUG_MODE)
		std::cout << "ShrubberyCreationForm " << _target << " copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	if (DEBUG_MODE)
		std::cout << "ShrubberyCreationForm " << _target << " destructor called" << std::endl;
}

/*========================= overide function ==========================*/

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	(void) rhs;
	if (DEBUG_MODE)
		std::cout << "ShrubberyCreationForm copy assignment called" << std::endl;
	return (*this);
}

/*========================= overide function ==========================*/

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!this->getSigned())
		throw (AForm::FormNotSignedException());
	if (executor.getGrade() > this->getExecGrade()) // use this because attribute is private by Base class
		throw (Bureaucrat::GradeTooLowException());
	// make job
	std::string file_name = _target + "_shrubbery";
	std::ofstream target(file_name.data());
	if (!target.is_open())
		throw (AForm::FileOpenException());
	target << "       #         " << std::endl;
	target << "      ###        " << std::endl;
	target << "     #####       " << std::endl;
	target << "    #######      " << std::endl;
	target << "   #########     " << std::endl;
	target << "  ###########    " << std::endl;
	target << " #############   " << std::endl;
	target << "###############  " << std::endl;
	target << "      ##         " << std::endl;
	target << "      ##         " << std::endl;
	target << "      ##         " << std::endl;
	target.close();
}

/*========================= member function ==========================*/

std::string const & ShrubberyCreationForm::getTaget(void) const
{
	return (_target);
}
