/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:07:31 by pnamnil           #+#    #+#             */
/*   Updated: 2024/01/24 15:00:25 by pnamnil          ###   ########.fr       */
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
public:
	Contact(void);
	~Contact(void);
	static int getInts(void);
};

#endif