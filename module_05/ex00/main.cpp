/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:53:43 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/13 11:46:28 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main(void)
{
	try{
		Bureaucrat bob("bob", 1);
		std::cout << bob << std::endl;
		// bob.increment(); //expect throw Grade to Hight
		bob.decrement();
		std::cout << bob << std::endl;
		Bureaucrat john("john", 150);
		std::cout << john << std::endl;
		// john.decrement(); //expect throw Grade to Low
		john.increment();
		std::cout << john << std::endl;
		Bureaucrat tom("tom", 100);
		std::cout << tom << std::endl;
		tom = bob; //it copy only grade because name is const
		std::cout << tom << std::endl;
		Bureaucrat tim = Bureaucrat(tom); //all tom copy to tim
		std::cout << tim << std::endl;
	}
	catch(const Bureaucrat::GradeTooHighExcption e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowExcption e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const std::exception e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}

