/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student42 <student42@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 12:40:39 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/13 18:37:49 by student42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <string>
#include <algorithm>
#include <stack>
#include <cstdlib>
#include <iostream>
#include <sstream>

#include "Colors.hpp"

class RPN
{
  public:
	RPN();
	RPN(const RPN& original);
	RPN& operator=(const RPN& original);
	~RPN();
	
	double Calculate(std::string input);
	
  private:
	bool isOperation(char c);
	void doOperation();
	std::stack<std::string> _operations;
};
