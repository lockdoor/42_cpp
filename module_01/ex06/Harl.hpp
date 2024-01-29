/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:59:09 by pnamnil           #+#    #+#             */
/*   Updated: 2024/01/29 12:49:57 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl
{
private:
	static void	__debug(void);
	static void	__info(void);
	static void	__warning(void);
	static void	__error(void);
public:
	Harl(/* args */);
	~Harl();
	void	complain(std::string level);
};

#endif
