/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:27:48 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/20 07:12:57 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include "debug.hpp"

/* =============== constructor ================== */

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name), _grade(grade) 
{
	if (_grade < GRADE_HIGHT) throw GradeTooHighException();
	if (_grade > GRADE_LOW) throw GradeTooLowException();
	if (DEBUG_MODE)
		std::cout << "Bureaucrat " << _name << " constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & rhs) : _name(rhs.getName()), _grade(rhs.getGrade())
{
	if (DEBUG_MODE)
		std::cout << "Bureaucrat " << _name << " copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	if (DEBUG_MODE)
		std::cout << "Bureaucrat " << _name << " destructor called" << std::endl;
}

/* =============== overload function ================== */

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &rhs)
{
	if (this != &rhs) _grade = rhs.getGrade();
	if (DEBUG_MODE)
		std::cout << "Bureaucrat " << _name << " copy assignment called" << std::endl;
	return (*this);
}

std::ostream & operator<<(std::ostream &o, Bureaucrat const &i)
{
	o << i.getName() << " bureaucrat grade " << i.getGrade();
	return (o);
}

/* =============== member function ================== */

std::string const & Bureaucrat::getName()const
{
	return (_name);
}

unsigned int Bureaucrat::getGrade() const
{
	return (_grade);
}

void Bureaucrat::increment()
{
	if (_grade - 1 < GRADE_HIGHT) throw (GradeTooHighException());
	--_grade;
}

void Bureaucrat::decrement()
{
	if (_grade + 1 > GRADE_LOW) throw GradeTooLowException();
	++_grade;
}
