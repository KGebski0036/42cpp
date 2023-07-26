/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:28:13 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/13 14:17:14 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Colors.hpp"
#include "RPN.hpp"

int main(int argc, char *argv[])
{	
	if (argc != 2)
	{
		std::cout << RED << "Provide operations in \" \" as an argument.\n" << NC;
		return 0;
	}
	
	RPN rpn;
	try
	{
		std::cout << GREEN << rpn.Calculate(argv[1]) << "\n";
	}
	catch(const std::exception& e)
	{
		std::cout << RED << "ERROR\n";
		(void)e;
	}
	
	return (0);
}
