/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 10:28:15 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/13 14:50:15 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "debug.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

/*============================== constructor ===========================*/

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) :
	AForm("PresidentialPardonForm", 25, 5),
	_target(target)	
{
	if (DEBUG_MODE)
		std::cout << "PresidentialPardonForm " << _target << " constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &rhs) :
	AForm(rhs), _target(rhs.getTaget())
{
	if (DEBUG_MODE)
		std::cout << "PresidentialPardonForm " << _target << " copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	if (DEBUG_MODE)
		std::cout << "PresidentialPardonForm " << _target << " destructor called" << std::endl;
}

/*========================= overide function ==========================*/

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	(void) rhs;
	if (DEBUG_MODE)
		std::cout << "PresidentialPardonForm copy assignment called" << std::endl;
	return (*this);
}

/*========================= overide function ==========================*/

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (!this->getSigned())
		throw (AForm::FormNotSignedException());
	if (executor.getGrade() > this->getExecGrade())
		throw (Bureaucrat::GradeTooLowException());
	// make job
	std::cout << _target << " has been pardoned by " << executor.getName() << std::endl;
}

/*========================= member function ==========================*/

std::string const & PresidentialPardonForm::getTaget(void) const
{
	return (_target);
}
