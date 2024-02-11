/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 08:21:28 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/11 10:10:28 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTOR_HPP
#define CHARACTOR_HPP

#include "ICharacter.hpp"
#include <string>

#ifndef SLOT_SIZE
#define SLOT_SIZE 4
#endif
class Character : public ICharacter
{
private:
	std::string _name;
	AMateria *_item[SLOT_SIZE];
public:
	Character(std::string const &name);
	Character(Character const &rhs);
	Character & operator=(Character const &rhs);
	~Character(void);

	/* overide function */
	std::string const & getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
	
	AMateria *getItem(int idx) const;
};




#endif
