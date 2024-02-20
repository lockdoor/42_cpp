/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:00:16 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/20 08:13:52 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main(void)
{
	try{
		Form tax("tax", 100, 20);
		std::cout << tax << std::endl;
		// Form f("tax", 0 , 1); // expect throw grade to high	
		// Form f("tax", 1 , 0); // expect throw grade to high	
		// Form f("tax", 1 , 151); // expect throw grade to low	
		// Form f("tax", 151 , 150); // expect throw grade to low
		Bureaucrat bob("bob", 120);
		std::cout << bob << std::endl;
		try {
			bob.signForm(tax); // expect throw grade to low
			std::cout << tax << std::endl;
		} catch (const std::exception &e){
			std::cerr << e.what() << std::endl;
		}
		Bureaucrat tom("tom", 99);
		std::cout << tom << std::endl;
		try {
			tom.signForm(tax);
			std::cout << tax << std::endl;
		} catch (const std::exception &e){
			std::cerr << e.what() << std::endl;
		}
		try {
			tom.signForm(tax); // expect throw form already signed
			std::cout << tax << std::endl;
		} catch (const std::exception &e){
			std::cerr << e.what() << std::endl;
		}
		for(int i = 0; i < 30; i++)
			bob.increment();
		std::cout << bob << std::endl;
		try {
			bob.signForm(tax); // expect throw form already signed
			std::cout << tax << std::endl;
		} catch (const std::exception &e){
			std::cerr << e.what() << std::endl;
		}
	}
	catch(const Form::GradeTooHighException &e)
	{
		std::cerr << "can not create Form because " << e.what() << std::endl;
	}
	catch(const Form::GradeTooLowException &e)
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
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
