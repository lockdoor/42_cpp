/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 16:21:01 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/13 16:55:43 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include "AForm.hpp"

class Intern
{
private:
	std::string _form[3];
public:
	Intern(void);
	Intern(Intern const &rhs);
	~Intern();
	Intern & operator=(Intern const &rhs);
	
	AForm *makeForm(std::string const &form, std::string const &target);
	std::string const & getForm(int idx) const;
};

#endif
