/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 06:07:35 by pnamnil           #+#    #+#             */
/*   Updated: 2024/03/22 09:55:32 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <sstream>
#include <stack>
#include <iostream>
#include <stdexcept>

RPN::RPN(/* args */)
{
}

RPN::~RPN()
{
}

int RPN::calculate(std::string const &input)
{
	std::stack<int> data;
	std::istringstream iss(input);
	std::string ch;
	std::string operate = "+-*/";
	std::string digit = "0123456789";

	while (iss >> ch){
		
		if (ch.length() != 1) {
			throw (std::invalid_argument("Error 1"));
		}
		
		if (operate.find(ch) != std::string::npos) {
			int dgt[2];
			if (data.size() < 2) {
				throw (std::invalid_argument("Error 3"));
			}
			
			dgt[1] = data.top();
			data.pop();
			dgt[0] = data.top();
			data.pop();
			
			switch (ch[0]) {
				case '+':
					data.push(dgt[0] + dgt[1]);
					break;
				case '-':
					data.push(dgt[0] - dgt[1]);
					break;
				case '*':
					data.push(dgt[0] * dgt[1]);
					break;
				case '/':
					data.push(dgt[0] / dgt[1]);
					break;
				default:
					break;
			}
		} else if (digit.find(ch) != std::string::npos) {
			data.push(ch[0] - 48);
		} else {
			throw (std::invalid_argument("Error 2"));
		}
	}

	if (data.size() > 1) {
		throw (std::invalid_argument("Error 5"));
	}
	return (data.top());
}
