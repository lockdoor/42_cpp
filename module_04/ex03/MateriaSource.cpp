/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 11:16:19 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/11 16:28:33 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource(void)
{
	_idx = 0;
	for (int i = 0; i < SLOT_SIZE; i++)
		_items[i] = NULL;
	std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &rhs)
{
	_idx = rhs.getIdx();
	for (int i = 0; i < SLOT_SIZE; i++)
		_items[i] = rhs.getItem(i);
	std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource & MateriaSource::operator=(MateriaSource const &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < SLOT_SIZE; i++)
		{
			if (_items[i]) delete _items[i];
		}
		for (int i = 0; i < SLOT_SIZE; i++)
			_items[i] = rhs.getItem(i);
		_idx = rhs.getIdx();
	}
	std::cout << "MateriaSource copy assignment called" << std::endl;
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < SLOT_SIZE; i++)
	{
		if (_items[i]) delete _items[i];
	}
	std::cout << "MateriaSource destructor called" << std::endl;
}

/* overide function */
void MateriaSource::learnMateria(AMateria* item)
{
	if (!item) {
		std::cout << "MateriaSource no item to learn" << std::endl;
		return;
	}
	for(int i = 0; i < SLOT_SIZE; i++)
	{
		if (_items[i] && _items[i] == item)
		{
			std::cout << "MateriaSource already learn" << std::endl;
			return;
		}
	}
	if (_idx < SLOT_SIZE){
		_items[_idx++] = item;
		std::cout << "MateriaSource has learn " << item->getType() << std::endl;
	}
	else {
		delete item;
		std::cout << "MateriaSource has learn full this item will delete" << std::endl;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (size_t i = 0; i < _idx; i++)
	{
		if (_items[i]->getType() == type)
		{
			return (_items[i]->clone());
		}
	}
	std::cout << "MateriaSource can not create " << type << std::endl;
	return (NULL);
}

/* member function */
AMateria *MateriaSource::getItem(int idx) const
{
	if (_items[idx])
		return _items[idx]->clone();
	return (NULL);
}

size_t MateriaSource::getIdx(void) const
{
	return (_idx);
}
