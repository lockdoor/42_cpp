/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:07:31 by pnamnil           #+#    #+#             */
/*   Updated: 2024/01/26 08:26:20 by pnamnil          ###   ########.fr       */
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
	bool		_isData;
public:
	Contact(void);
	~Contact(void);
	void	setData(std::string data[5]);
	void	getData(void) const;
};

#endif