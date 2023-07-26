/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 12:40:39 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/13 12:10:15 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <string>
#include <fstream>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <map>

#include "Colors.hpp"

class BitcoinExchange
{
  public:
	BitcoinExchange(std::string database_file);
	BitcoinExchange(const BitcoinExchange& original);
	BitcoinExchange& operator=(const BitcoinExchange& original);
	~BitcoinExchange();
	
	void ShowMyIncome(std::string input_file_name);
	
  private:
	BitcoinExchange();
	
	double GetIncome(std::string date);
	bool isInputDataValid(std::string line);
	bool isInputIncomeValid(std::string line);
	bool isDateValid(std::string line);
	bool isValueValid(std::string line);
	
	std::map<std::string, double> _db;
};
