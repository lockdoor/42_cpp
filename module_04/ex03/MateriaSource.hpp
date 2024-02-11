/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 11:10:37 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/11 11:53:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE
#define MATERIASOURCE

#include "IMateriaSource.hpp"

#ifndef SLOT_SIZE
#define SLOT_SIZE 4
#endif

class MateriaSource : virtual public IMateriaSource
{
private:
	AMateria *_items[SLOT_SIZE];
	size_t _idx;
public:
	MateriaSource(void);
	MateriaSource(MateriaSource const &rhs);
	MateriaSource & operator=(MateriaSource const &rhs);
	~MateriaSource();
	
	/* overide function */
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);

	/* member function */
	AMateria *getItem(int idx) const;
	size_t getIdx(void) const;
};

#endif