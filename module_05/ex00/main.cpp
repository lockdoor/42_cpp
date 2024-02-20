/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:53:43 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/20 07:20:44 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main(void)
{
	try{
		Bureaucrat bob("bob", 1);
		std::cout << bob << std::endl;
		
		try {
			bob.increment(); //expect throw Grade to Hight
			std::cout << bob << std::endl;
		} catch (const Bureaucrat::GradeTooHighException &e) {
			std::cerr << bob.getName() << " can not increment grade because " 
				<< e.what() << std::endl;
		}

		try {
			bob.decrement();
			std::cout << bob << std::endl;
		} catch (const Bureaucrat::GradeTooLowException &e) {
			std::cerr << bob.getName() << " can not decrement grade because " 
				<< e.what() << std::endl;
		}
		
		Bureaucrat john("john", 150);

		try {
			john.decrement(); //expect throw Grade to Low
			std::cout << john << std::endl;
		} catch (const Bureaucrat::GradeTooLowException &e) {
			std::cerr << john.getName() << " can not decrement grade because " 
				<< e.what() << std::endl;
		}

		try {
			john.increment(); //expect throw Grade to Low
			std::cout << john << std::endl;
		} catch (const Bureaucrat::GradeTooLowException &e) {
			std::cerr << john.getName() << " can not decrement grade because " 
				<< e.what() << std::endl;
		}
		
		Bureaucrat tom("tom", 100);
		std::cout << tom << std::endl;
		tom = bob; //it copy only grade because name is const
		std::cout << tom << std::endl;
		Bureaucrat tim = Bureaucrat(tom); //all tom copy to tim
		std::cout << tim << std::endl;
	}
	catch(const Bureaucrat::GradeTooHighException e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const std::exception e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}

