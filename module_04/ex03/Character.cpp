/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 08:23:28 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/11 11:31:12 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character(std::string const &name) : _name(name)
{
	for (int i = 0; i < SLOT_SIZE; i++)
		_item[i] = NULL;
	std::cout << "Charactor name constructor called" << std::endl;
}

Character::Character(Character const &rhs)
{
	_name = rhs.getName();
	for (int i = 0; i < SLOT_SIZE; i++)
		_item[i] = rhs.getItem(i);
	std::cout << "Charactor copy constructor called" << std::endl;
}

Character & Character::operator=(Character const &rhs)
{
	if (this != &rhs)
	{
		_name = rhs.getName();
		for (int i = 0; i < SLOT_SIZE; i++)
		{
			if (_item[i]) delete _item[i];
		}
		for (int i = 0; i < SLOT_SIZE; i++)
			_item[i] = rhs.getItem(i);
	}
	std::cout << "Charactor copy assignment called" << std::endl;
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < SLOT_SIZE; i++)
	{
		if (_item[i]) delete _item[i];
	}
	std::cout << "Charactor destructor called" << std::endl;
}


/* overide function */
std::string const & Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < SLOT_SIZE; i++)
	{
		if (_item[i] == NULL) _item[i] = m;
		return ;
	}
	std::cout << _name << " slot is full" << std::endl;
}

void Character::unequip(int idx)
{
	// will change drop to floor
	if (_item[idx]) delete _item[idx];
	
}

void Character::use(int idx, ICharacter &target)
{
	// if (_item[idx]) _item[idx]->use(target);
	if (_item[idx]) _item[idx]->use(target);
	else std::cout << "slot is empty" << std::endl;
}

/* member function */
AMateria *Character::getItem(int idx) const
{
	if (_item[idx])
		return _item[idx]->clone();
	return (NULL);
}
