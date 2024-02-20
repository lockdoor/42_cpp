/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:40:08 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/20 08:28:23 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
	std::string const _name;
	bool _signed;
	unsigned int const _signGrade;
	unsigned int const _execGrade;
public:
	/* constructor */
	AForm(std::string const &name, int sign, int exec);
	AForm(AForm const &rhs);
	virtual ~AForm();

	/* overload function */
	AForm & operator=(AForm const &rhs);

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
	class FormNotSignedException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Form is not signed");
			}
	};
	class FileOpenException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("File open failed");
			}
	};
	
	
	/* member function */
	std::string const & getName(void) const;
	void beSigned(Bureaucrat const &b);
	unsigned int const & getSignGrade(void) const;
	unsigned int const & getExecGrade(void) const;
	bool const & getSigned(void) const;
	
	/* virtual function */
	virtual void execute(Bureaucrat const &executor) const = 0;
};

std::ostream & operator<<(std::ostream &o, AForm const &i);

#endif
