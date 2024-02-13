/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 10:24:56 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/13 15:27:02 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PresidentialPardonForm_HPP
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
    std::string const _target;
public:
    /* constructor */
    PresidentialPardonForm(std::string const &target);
    PresidentialPardonForm(PresidentialPardonForm const &rhs);
    ~PresidentialPardonForm();

    /* overload function */
    PresidentialPardonForm & operator=(PresidentialPardonForm const &rhs);

    /* overide function */
    void execute(Bureaucrat const &executor) const;

    /* member function */
    std::string const & getTaget(void) const;
};

#endif
