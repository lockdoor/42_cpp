/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:49:42 by pnamnil           #+#    #+#             */
/*   Updated: 2024/01/27 11:52:42 by pnamnil          ###   ########.fr       */
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
	std::string	__getInput(std::string prompt);
	int			_isIndex(const std::string &str);
	void		_showContact(void) const;
public:
	PhoneBook();
	~PhoneBook();
	void	add(void);
	void	search(void);
};

#endif
