/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student42 <student42@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 12:42:33 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/13 18:38:30 by student42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}
RPN::RPN(const RPN& original) 
{
	_operations = original._operations;
}
RPN& RPN::operator=(const RPN& original)
{
	_operations = original._operations;
	return (*this);
}

double RPN::Calculate(std::string input)
{
	for (size_t i = 0; i < input.length(); i++)
	{
		if (input[i] == ' ')
			continue;
		else if (isdigit(input[i]))
		{
			for (size_t j = 0; j + i < input.length(); j++)
			{
				if (!isdigit(input[i + j]))
				{
					_operations.push(input.substr(i, j));
					i += j;
					break;
				}
			}
		}
		else if (isOperation(input[i]))
		{
			if (_operations.size() < 2)
				throw std::exception();
			_operations.push(input.substr(i, 1));
			doOperation();
		}
		else
			throw std::exception();
	}
	if (_operations.size() != 1)
		throw std::exception();
	return std::atoi(_operations.top().c_str());
}

void RPN::doOperation()
{
	std::string operation = _operations.top();
	_operations.pop();
	int b = std::atoi(_operations.top().c_str());
	_operations.pop();
	int a = std::atoi(_operations.top().c_str());
	_operations.pop();
	
	std::string out = "";
	std::stringstream ss;
	 
	if (operation == "+")
		ss << a + b;
	if (operation == "-")
		ss << a - b;
	if (operation == "*")
		ss << a * b;
	if (operation == "/")
	{
		if (b == 0)
			throw std::exception();
		ss << a / b;
	}
	ss >> out;
	_operations.push(out);
}

bool RPN::isOperation(char c)
{
	return c == '+' || c == '-' || c == '*' || c == '/';
}

RPN::~RPN() {}
