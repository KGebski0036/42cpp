/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:28:13 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/05 15:21:22 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Colors.hpp"

int main()
{
	try
	{
		Bureaucrat b1("Grzegorz");
		
		std::cout << BLUE << b1 << "\n";
		b1.incrementGrade();
		b1.incrementGrade();
		std::cout << BLUE  << b1 << "\n";
		b1.decrementGrade();
		b1.decrementGrade();
		b1.decrementGrade();
		std::cout << BLUE  << b1 << "\n";
	}
	catch (std::exception & e)
	{
		std::cerr << RED << e.what();
	}
	
	try
	{
		Bureaucrat b2("Braum");
		
		for (int i = 0; i < 100; i++)
			b2.incrementGrade();
		std::cout << BLUE  << b2 << "\n";
		for (int i = 0; i < 100; i++)
			b2.incrementGrade();
	}
	catch (std::exception & e)
	{
		std::cerr << RED << e.what();
	}

	return 0;
}