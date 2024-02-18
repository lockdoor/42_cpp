/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:27:48 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/18 08:12:07 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include "debug.hpp"

/* =============== constructor ================== */

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name), _grade(grade) 
{
	if (_grade < gradeHight) throw GradeTooHighException();
	if (_grade > gradeLow) throw GradeTooLowException();
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
	try {
		if (_grade - 1 < gradeHight) throw (GradeTooHighException());
		--_grade;
		std::cout << _name << " increment Grade" << std::endl;
	}
	catch (const GradeTooHighException &e) {
		std::cerr << _name  << " Can not increment Grade becouse " << e.what() << std::endl;
	}
	catch (const std::exception &e) {
		throw std::runtime_error("An error occurred while incrementing grade: " + std::string(e.what()));
	}
}

void Bureaucrat::decrement()
{
	try {
		if (_grade + 1 > gradeLow) throw GradeTooLowException();
		++_grade;
		std::cout << _name << " decrement Grade" << std::endl;
	}
	catch (const GradeTooLowException &e) {
		std::cerr << _name << " Can not decrement Grade becouse " << e.what() << std::endl;
	}
	catch (const std::exception &e) {
		throw std::runtime_error("An error occurred while decrementing grade: " + std::string(e.what()));
	}
}
