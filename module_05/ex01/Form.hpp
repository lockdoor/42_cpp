/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:40:08 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/13 10:01:21 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	std::string const _name;
	bool _signed;
	unsigned int const _signGrade;
	unsigned int const _execGrade;
public:
	/* constructor */
	Form(std::string const &name, int sign, int exec);
	Form(Form const &rhs);
	~Form();

	/* overload function */
	Form & operator=(Form const &rhs);

	/* static */
	static const unsigned int gradeHight = 1;
	static const unsigned int gradeLow = 150;

	/* exception */
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade too High");
			}
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade too Low");
			}
	};
	class FormAlreadySignedException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Form already signed");
			}
	};
	
	/* member function */
	std::string const & getName(void) const;
	void beSigned(Bureaucrat const &b);
	unsigned int const & getSignGrade(void) const;
	unsigned int const & getExecGrade(void) const;
	bool const & getSigned(void) const;
};

std::ostream & operator<<(std::ostream &o, Form const &i);

#endif
