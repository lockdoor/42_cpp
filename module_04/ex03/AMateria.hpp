/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 07:06:40 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/11 10:57:53 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
    std::string _type;
public:
    AMateria(void);
    AMateria(std::string const & type);
    AMateria(AMateria const &rhs);
    AMateria & operator=(AMateria const &rhs);
    virtual ~AMateria(void);

    std::string const & getType() const;

    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);
};

#endif
