/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 12:57:27 by pnamnil           #+#    #+#             */
/*   Updated: 2024/03/20 13:42:40 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <string>

#define NEGATIVE_NUMBER "Error: not a positive number."
#define BAD_INPUT "Error: bad input => "
#define TOO_LARGE "Error: too large a number."

class BitcoinExchange
{
private:
	std::map<int, float> _data;
	BitcoinExchange();
public:
	BitcoinExchange(std::string const &filename);
	BitcoinExchange(BitcoinExchange const &rhs);
	BitcoinExchange & operator=(BitcoinExchange const &rhs);
	~BitcoinExchange();

	/* member function */
	void showData() const;
	void calculate(std::string const &filename);
	bool checkDateFormat(std::string const &str);
	bool checkValidDate(int y, int m, int d);
	int dateStringToInt(std::string const &dateString);
	bool valueStringToFloat(std::string const &valueString, float *value);
	std::string trim(std::string &str);
	bool parser(std::string buf, int *date, float *value, char sep);
	std::string const intToDateString(int date) const;
	const std::map<int, float> &get_data(void) const;
};

#endif
