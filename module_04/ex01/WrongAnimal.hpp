/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:15:29 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/09 14:59:48 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <string>

class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal(/* args */);
    WrongAnimal(WrongAnimal const &rhs);
	WrongAnimal & operator=(WrongAnimal const &rhs);
    ~WrongAnimal();
    void makeSound(void) const;
    std::string const getType(void) const;
};

#endif