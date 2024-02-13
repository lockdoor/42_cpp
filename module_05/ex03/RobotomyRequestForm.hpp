/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 10:24:56 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/13 10:25:39 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
    std::string const _target;
public:
    /* constructor */
    RobotomyRequestForm(std::string const &target);
    RobotomyRequestForm(RobotomyRequestForm const &rhs);
    ~RobotomyRequestForm();

    /* overload function */
    RobotomyRequestForm & operator=(RobotomyRequestForm const &rhs);

    /* overide function */
    void execute(Bureaucrat const &executor) const;

    /* member function */
    std::string const & getTaget(void) const;
};

#endif
