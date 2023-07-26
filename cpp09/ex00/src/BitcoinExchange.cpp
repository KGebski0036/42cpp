/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 12:42:33 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/26 21:43:51 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}
BitcoinExchange::BitcoinExchange(const BitcoinExchange& original) 
{
	_db = original._db;
}
BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& original)
{
	_db = original._db;
	return (*this);
}


BitcoinExchange::BitcoinExchange(std::string database_file)
{
	std::ifstream db_stream(database_file.c_str());
	std::string buffer;
	
	if(!db_stream.is_open())
	{
		std::cerr << RED << "Error: Coudn't open a file\n" << NC;
		return ;
	}
	
	getline(db_stream, buffer, '\n');
	
	if (buffer != "date,exchange_rate")
	{
		std::cerr << RED << "Error: invalid header => " << buffer << "\n" << NC;
	}
	
	while (getline(db_stream, buffer, '\n'))
	{
		if(!isInputDataValid(buffer))
		{
			std::cerr << RED << "Error: bad input => " << buffer << "\n" << NC;
			continue;
		}
		
		std::string date = buffer.substr(0, 10);
		std::string raw_value = buffer.substr(11);
		
		double value = atof(raw_value.c_str());
		
		if (value == 0 && raw_value != "0")
		{
			std::cerr << RED << "Error: bad input => " << buffer << "\n" << NC;
			continue;
		}
		
		_db[date] = value;
	}
	
}

bool BitcoinExchange::isInputDataValid(std::string line)
{
	size_t comma_pos = line.find(',');
		
	if (comma_pos != 10 || line.length() < 12)
		return false;
	return true;
}

bool BitcoinExchange::isInputIncomeValid(std::string line)
{
	size_t pipe_pos = line.find(" | ");
		
	if (pipe_pos != 10 || line.length() < 14)
		return false;
	
	return true;
}

void BitcoinExchange::ShowMyIncome(std::string input_file_name)
{
	std::ifstream input_stream(input_file_name.c_str());
	std::string buffer;
	
	if(!input_stream.is_open())
	{
		std::cerr << RED << "Error: Coudn't open a file\n" << NC;
		return;
	}

	getline(input_stream, buffer, '\n');
	
	if (buffer != "date | value")
	{
		std::cerr << RED << "Error: invalid header => " << buffer << "\n" << NC;
	}
	
	while (getline(input_stream, buffer, '\n'))
	{
		if(!isInputIncomeValid(buffer))
		{
			std::cerr << RED << "Error: bad input => " << buffer << "\n" << NC;
			continue;
		}
		
		std::string date = buffer.substr(0, 10);
		std::string raw_value = buffer.substr(13);
		
		if(!isDateValid(date))
		{
			std::cerr << RED << "Error: invalid date => " << buffer << "\n" << NC;
			continue;
		}
		
		if(!isValueValid(raw_value))
			continue;
			
		double income = GetIncome(date);
		
		if (income == -1) {
			std::cerr << RED << "Error: No exchange rate available => " << buffer << "\n" << NC;
			continue;
		}
		
		

		std::cout << BLUE << date << NC << " => " << MAGENTA << std::setw(4) << raw_value << NC << " = " 
			<< GREEN << atof(raw_value.c_str()) * income << "\n" << NC;
	}
}

bool BitcoinExchange::isDateValid(std::string line)
{
	if (line.at(4) != '-' || line.at(7) != '-')
		return false;
	
	std::string year_str = line.substr(0, 4);
	std::string month_str = line.substr(5, 2);
	std::string day_str = line.substr(8, 2);
	
	int year = std::atoi(year_str.c_str());
	int month = std::atoi(month_str.c_str());
	int day = std::atoi(day_str.c_str());
	
	if ((month == 0 && month_str != "00") || (day == 0 && day_str != "00")
		|| day < 0 || month < 0 || year < 1 || month > 12 || day > 31)
		return false;
		
	if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
		return false;
		
	if (month == 2)
	{
		bool isLeapYear = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
		
		if ((isLeapYear && day > 29) || (!isLeapYear && day > 28))
			return false;
	}
	
	return true;
}

bool BitcoinExchange::isValueValid(std::string line)
{
	double value = std::atof(line.c_str());
	
	if (value == 0 && line.substr(0, 1) != "0")
	{
		std::cerr << RED << "Error: invalid value => " << line << "\n" << NC;
		return false;
	}
	
	if (value < 0)
	{
 		std::cerr << RED << "Error: not a positive number.."<< "\n" << NC;
		 return false;
	}
	if (value > 1000)
	{
 		std::cerr << RED << "Error: too large a number." << "\n" << NC;
		return false;
	}
	return true;
}

double BitcoinExchange::GetIncome(std::string date)
{
	std::map<std::string, double>::iterator it = _db.lower_bound(date);
	
	if (it != _db.end())
	{
		if (it->first != date)
			--it;
		return it->second;
	}
	else if (!_db.empty()) 
		return (--it)->second;

	return -1;
}

BitcoinExchange::~BitcoinExchange() {}
