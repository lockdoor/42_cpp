/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 11:11:31 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/22 11:14:13 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
#define MAIN_HPP

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void);
void identity(Base *p);
void identity(Base &p);

#endif