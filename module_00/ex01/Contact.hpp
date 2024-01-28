/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:07:31 by pnamnil           #+#    #+#             */
/*   Updated: 2024/01/28 06:37:25 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <string>

class Contact
{
private:
	std::string	_fname;
	std::string	_lname;
	std::string	_nname;
	std::string	_phone;
	std::string	_secret;
	bool		_hasData;
public:
	Contact(void);
	~Contact(void);
	void	setData(std::string data[5]);
	void	getData(void) const;
	void	showContact(std::size_t index, std::size_t len) const;
	static std::string	truncate(const std::string &str, std::size_t len);
};

#endif