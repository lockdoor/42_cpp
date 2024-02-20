/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:00:16 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/20 09:18:19 by pnamnil          ###   ########.fr       */
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
