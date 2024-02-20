/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:00:16 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/20 09:13:48 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main(void)
{
	AForm *form1;
	try{
		form1 = new ShrubberyCreationForm("tree_file");
		std::cout << *form1 << std::endl;
		
		Bureaucrat bob("bob", 150);
		std::cout << bob << std::endl;
		try {
			bob.signForm(*form1); // expect throw grade to low
		} catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		
		Bureaucrat tom("tom", 99);
		std::cout << tom << std::endl;
		try {
			tom.executeForm(*form1); //expect throw form not signed
		} catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		
		try {
			tom.signForm(*form1);	
		} catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		std::cout << *form1 << std::endl;
		
		try {
			tom.signForm(*form1); // expect throw form already signed
		} catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		try {
			bob.executeForm(*form1); // expect throw grade to low	
		} catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		
		for(int i = 0; i < 30; i++) bob.increment();
		std::cout << bob << std::endl;
		try {
			bob.executeForm(*form1);
		} catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		
		delete form1;
	}
	catch(const AForm::GradeTooHighException &e)
	{
		std::cerr << "can not create Form because " << e.what() << std::endl;
	}
	catch(const AForm::GradeTooLowException &e)
	{
		std::cerr << "can not create Form because " << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << "can not create Bureaucrat because " << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << "can not create Bureaucrat because " << e.what() << std::endl;
	}
	catch(const std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	return (0);
}

/*
int main(void)
{
	AForm *form1;
	try{
		form1 = new RobotomyRequestForm("Bender");
		std::cout << *form1 << std::endl;
		
		Bureaucrat bob("bob", 100);
		std::cout << bob << std::endl;
		try {
			bob.signForm(*form1); // expect throw grade to low
		} catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		
		Bureaucrat tom("tom", 70);
		std::cout << tom << std::endl;
		try {
			tom.executeForm(*form1); //expect throw form not signed
		} catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		
		try {
			tom.signForm(*form1);	
		} catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		std::cout << *form1 << std::endl;
		
		try {
			tom.signForm(*form1); // expect throw form already signed
		} catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		try {
			bob.executeForm(*form1); // expect throw grade to low	
		} catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		
		for(int i = 0; i < 60; i++) bob.increment();
		std::cout << bob << std::endl;
		try {
			bob.executeForm(*form1);
		} catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		
		delete form1;
	}
	catch(const AForm::GradeTooHighException &e)
	{
		std::cerr << "can not create Form because " << e.what() << std::endl;
	}
	catch(const AForm::GradeTooLowException &e)
	{
		std::cerr << "can not create Form because " << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << "can not create Bureaucrat because " << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << "can not create Bureaucrat because " << e.what() << std::endl;
	}
	catch(const std::exception &e){
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
		try {
			bob.signForm(*form1); // expect throw grade to low
		} catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		
		Bureaucrat tom("tom", 20);
		std::cout << tom << std::endl;
		try {
			tom.executeForm(*form1); //expect throw form not signed
		} catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		
		try {
			tom.signForm(*form1);	
		} catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		std::cout << *form1 << std::endl;
		
		try {
			tom.signForm(*form1); // expect throw form already signed
		} catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		try {
			bob.executeForm(*form1); // expect throw grade to low	
		} catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		
		for(int i = 0; i < 96; i++) bob.increment();
		std::cout << bob << std::endl;
		try {
			bob.executeForm(*form1);
		} catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		
		delete form1;
	}
	catch(const AForm::GradeTooHighException &e)
	{
		std::cerr << "can not create Form because " << e.what() << std::endl;
	}
	catch(const AForm::GradeTooLowException &e)
	{
		std::cerr << "can not create Form because " << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << "can not create Bureaucrat because " << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << "can not create Bureaucrat because " << e.what() << std::endl;
	}
	catch(const std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
*/
