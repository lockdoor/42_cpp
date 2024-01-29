/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:49:42 by pnamnil           #+#    #+#             */
/*   Updated: 2024/01/29 05:56:41 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <string>
# define CONTACT_NUMBER 8
# define TRUNCATE 10

class PhoneBook
{
private:
	Contact		_contact[CONTACT_NUMBER];
	std::size_t	_index;
	std::size_t	_number;
	std::string	__getInput(std::string prompt) const;
	int			__isIndex(const std::string &str) const;
	void		__showContact(void) const;
public:
	PhoneBook();
	~PhoneBook();
	void	add(void);
	void	search(void) const;
	void	open(void);
};

#endif
