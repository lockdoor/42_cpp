/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:49:42 by pnamnil           #+#    #+#             */
/*   Updated: 2024/01/24 17:09:43 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <string>

class PhoneBook
{
private:
	// Contact	_contact[8];
public:
	PhoneBook();
	~PhoneBook();
	void	add(void);
	void	search(void);
};

#endif
