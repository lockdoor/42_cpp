/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 15:06:58 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/09 15:44:55 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain
{
private:
	std::string _ideas[100];
	void	__initIdeas();
public:
	Brain(/* args */);
	Brain(Brain const &rhs);
	Brain & operator=(Brain const &rhs);
	~Brain();

	std::string getIdeas(int index) const;
	void setIdea(std::string const &idea, int index);
};

#endif
