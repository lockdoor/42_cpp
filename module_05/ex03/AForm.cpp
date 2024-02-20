/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:37:11 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/13 10:01:29 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "debug.hpp"
#include "AForm.hpp"
#include <iostream>

/* ============== constructor ===================== */

AForm::AForm(std::string const &name, int sign, int exec) 
	: _name(name), _signGrade(sign), _execGrade(exec)
{
	if (_signGrade < GRADE_HIGHT || _execGrade < GRADE_HIGHT)
		throw (GradeTooHighException());
	if (_signGrade > GRADE_LOW || _execGrade > GRADE_LOW)
		throw (GradeTooLowException());
	_signed = false;
	if (DEBUG_MODE)
		std::cout << "Form " << _name << " constructor called" << std::endl;
}

AForm::AForm(AForm const &rhs) : 
	_name(rhs.getName()), 
	_signed(rhs.getSigned()),
	_signGrade(rhs.getSignGrade()),
	_execGrade(rhs.getExecGrade())
{
	if (DEBUG_MODE)
		std::cout << "Form " << _name << " copy constructor called" << std::endl;
}

AForm::~AForm()
{
	if (DEBUG_MODE)
		std::cout << "Form " << _name << " destructor called" << std::endl;
}

/* ============== overload function ================ */

AForm & AForm::operator=(AForm const &rhs)
{
	(void) rhs;
	if (DEBUG_MODE)
		std::cout << "can not copy assignment because value of Form is constant" << std::endl;
	return (*this);
}

std::ostream & operator<<(std::ostream &o, AForm const &i)
{
	std::cout << "Form " << i.getName()
		<< ", Signed status " << i.getSigned()
		<< ", Grade to Signed " << i.getSignGrade()
		<< ", Grade to Execute " << i.getExecGrade();
	return (o);
}

/* ============== member function ================== */

std::string const & AForm::getName(void) const
{
	return (_name);
}

unsigned int const & AForm::getSignGrade(void) const
{
	return (_signGrade);
}

unsigned int const & AForm::getExecGrade(void) const
{
	return (_execGrade);
}

bool const & AForm::getSigned(void) const
{
	return (_signed);
}

void AForm::beSigned(Bureaucrat const &b)
{
	if (b.getGrade() > _signGrade)
		throw (GradeTooLowException());
	if (_signed)
		throw (FormAlreadySignedException());
	_signed = true;
}
