/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:49:42 by pnamnil           #+#    #+#             */
/*   Updated: 2024/01/26 12:42:56 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <string>

class PhoneBook
{
private:
	Contact				_contact[8];
	static std::size_t	_index;
	std::string			__getInput(std::string prompt);
public:
	PhoneBook();
	~PhoneBook();
	void	add(void);
	void	search(void);
};

#endif
