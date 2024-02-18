/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:00:16 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/18 09:02:28 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main(void)
{
	Intern intern;
	AForm *form;
	std::string formName;
	try {
		formName = "robotomy request";
		form = intern.makeForm(formName, "Bender");
		std::cout << *form << std::endl;
		delete form;
	}
	catch (const Intern::FormNotFoundException &e) {
		std::cerr << formName << ": " << e.what() << std::endl;
	}
	try {
		formName = "declare war";
		form = intern.makeForm(formName, "Bender");
		std::cout << *form << std::endl;
		delete form;
	}
	catch (const Intern::FormNotFoundException &e) {
		std::cerr << formName << ": " << e.what() << std::endl;
	}
	return (0);
}

/*
int main(void)
{
	AForm *form1;
	try{
		form1 = new ShrubberyCreationForm("tree_file");
		std::cout << *form1 << std::endl;
		Bureaucrat bob("bob", 150);
		std::cout << bob << std::endl;
		bob.signForm(*form1); // expect throw grade to low
		Bureaucrat tom("tom", 99);
		std::cout << tom << std::endl;
		tom.executeForm(*form1); //expect throw form not signed
		tom.signForm(*form1);
		std::cout << *form1 << std::endl;
		tom.signForm(*form1); // expect throw form already signed
		bob.executeForm(*form1); // expect throw grade to low
		for(int i = 0; i < 30; i++) bob.increment();
		std::cout << bob << std::endl;
		bob.executeForm(*form1);
		delete form1;
	}
	catch(AForm::GradeTooHighException &e)
	{
		std::cout << "can not create Form because " << e.what() << std::endl;
	}
	catch(AForm::GradeTooLowException &e)
	{
		std::cerr << "can not create Form because " << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << "can not create Bureaucrat because " << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << "can not create Bureaucrat because " << e.what() << std::endl;
	}
	catch(std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
*/

/*
int main(void)
{
	AForm *form1;
	try{
		form1 = new RobotomyRequestForm("Bender");
		std::cout << *form1 << std::endl;
		Bureaucrat bob("bob", 100);
		std::cout << bob << std::endl;
		bob.signForm(*form1); // expect throw grade to low
		Bureaucrat tom("tom", 70);
		std::cout << tom << std::endl;
		tom.executeForm(*form1); //expect throw form not signed
		tom.signForm(*form1);
		std::cout << *form1 << std::endl;
		tom.signForm(*form1); // expect throw form already signed
		bob.executeForm(*form1); // expect throw grade to low
		for(int i = 0; i < 60; i++) bob.increment();
		std::cout << bob << std::endl;
		bob.executeForm(*form1);
		delete form1;
	}
	catch(AForm::GradeTooHighException &e)
	{
		std::cout << "can not create Form because " << e.what() << std::endl;
	}
	catch(AForm::GradeTooLowException &e)
	{
		std::cerr << "can not create Form because " << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << "can not create Bureaucrat because " << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << "can not create Bureaucrat because " << e.what() << std::endl;
	}
	catch(std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
*/

/*
int main(void)
{
	AForm *form1;
	try{
		form1 = new PresidentialPardonForm("Bender");
		std::cout << *form1 << std::endl;
		Bureaucrat bob("bob", 100);
		std::cout << bob << std::endl;
		bob.signForm(*form1); // expect throw grade to low
		Bureaucrat tom("tom", 20);
		std::cout << tom << std::endl;
		tom.executeForm(*form1); //expect throw form not signed
		tom.signForm(*form1);
		std::cout << *form1 << std::endl;
		tom.signForm(*form1); // expect throw form already signed
		bob.executeForm(*form1); // expect throw grade to low
		for(int i = 0; i < 96; i++) bob.increment();
		std::cout << bob << std::endl;
		bob.executeForm(*form1);
		delete form1;
	}
	catch(AForm::GradeTooHighException &e)
	{
		std::cout << "can not create Form because " << e.what() << std::endl;
	}
	catch(AForm::GradeTooLowException &e)
	{
		std::cerr << "can not create Form because " << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << "can not create Bureaucrat because " << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << "can not create Bureaucrat because " << e.what() << std::endl;
	}
	catch(std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
*/
