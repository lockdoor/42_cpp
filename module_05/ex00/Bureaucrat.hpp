/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:16:47 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/18 08:07:39 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string>
# include <exception>

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
	
	/* member function */
	std::string const & getName(void) const;
	unsigned int getGrade(void) const;
	void increment(void);
	void decrement(void);
};

std::ostream & operator<<(std::ostream &o, Bureaucrat const &i);

#endif