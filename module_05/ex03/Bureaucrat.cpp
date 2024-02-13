/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:27:48 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/13 16:09:58 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "debug.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

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
	if(--_grade < gradeHight) throw GradeTooHighException(); 
}

void Bureaucrat::decrement()
{
	if(++_grade > gradeLow) throw GradeTooLowException();
}

void Bureaucrat::signForm(AForm &form)
{
	try{
		form.beSigned(*this);
		std::cout << _name << " signed " << form.getName() << std::endl;
	}
	catch (const AForm::GradeTooHighException &e){
		std::cerr << _name << " couldn't sign " << form.getName() 
			<< " because " << e.what() << std::endl;
	}
	catch (const AForm::GradeTooLowException &e){
		std::cerr << _name << " couldn't sign " << form.getName() 
			<< " because " << e.what() << std::endl;
	}
	catch (const AForm::FormAlreadySignedException &e){
		std::cerr << _name << " couldn't sign " << form.getName() 
			<< " because " << e.what() << std::endl;
	}
	catch (const AForm::FileOpenException &e){
		std::cerr << _name << " couldn't sign " << form.getName() 
			<< " because " << e.what() << std::endl;
	}
	catch (const std::exception &e){
		std::cerr << _name << " couldn't sign " << form.getName() 
			<< " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const &form) const
{
	try
	{
		form.execute(*this);
		std::cout << _name << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << _name << " couldn't execute because " << e.what() << std::endl;
	}
}
