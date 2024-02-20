/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:16:47 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/20 07:24:49 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string>
# include <exception>
# include "Form.hpp"
# define GRADE_HIGHT 1
# define GRADE_LOW 150

class Form;

class Bureaucrat
{
private:
	std::string const _name;
	unsigned int	_grade;
public:
	Bureaucrat(std::string const &name, int grade);
	Bureaucrat(Bureaucrat const &rhs);
	~Bureaucrat();
	Bureaucrat & operator=(Bureaucrat const &rhs);

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
	
	/* member function */
	std::string const & getName(void) const;
	unsigned int getGrade(void) const;
	void increment(void);
	void decrement(void);
	void signForm(Form &form);
};

std::ostream & operator<<(std::ostream &o, Bureaucrat const &i);

#endif