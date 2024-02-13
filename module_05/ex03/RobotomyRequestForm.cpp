/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 10:28:15 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/13 14:50:15 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "debug.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

/*============================== constructor ===========================*/

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) :
	AForm("RobotomyRequestForm", 72, 45),
	_target(target)	
{
	if (DEBUG_MODE)
		std::cout << "RobotomyRequestForm " << _target << " constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &rhs) :
	AForm(rhs), _target(rhs.getTaget())
{
	if (DEBUG_MODE)
		std::cout << "RobotomyRequestForm " << _target << " copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	if (DEBUG_MODE)
		std::cout << "RobotomyRequestForm " << _target << " destructor called" << std::endl;
}

/*========================= overide function ==========================*/

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	(void) rhs;
	if (DEBUG_MODE)
		std::cout << "RobotomyRequestForm copy assignment called" << std::endl;
	return (*this);
}

/*========================= overide function ==========================*/

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!this->getSigned())
		throw (AForm::FormNotSignedException());
	if (executor.getGrade() > this->getExecGrade())
		throw (Bureaucrat::GradeTooLowException());
	// make job
	srand(time(NULL));
	if (rand() % 2 == 0)
		std::cout << _target << " has been robotomized successfully" << std::endl;
	else
		std::cout << _target << " has been robotomized failed" << std::endl;
}

/*========================= member function ==========================*/

std::string const & RobotomyRequestForm::getTaget(void) const
{
	return (_target);
}
