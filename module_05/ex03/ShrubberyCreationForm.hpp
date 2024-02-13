/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 10:24:56 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/13 10:25:39 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
    std::string const _target;
public:
    /* constructor */
    ShrubberyCreationForm(std::string const &target);
    ShrubberyCreationForm(ShrubberyCreationForm const &rhs);
    ~ShrubberyCreationForm();

    /* overload function */
    ShrubberyCreationForm & operator=(ShrubberyCreationForm const &rhs);

    /* overide function */
    void execute(Bureaucrat const &executor) const;

    /* member function */
    std::string const & getTaget(void) const;
};

#endif
