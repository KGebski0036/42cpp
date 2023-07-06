/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:28:13 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/05 16:42:32 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "Colors.hpp"

int main()
{
	try
	{
		Bureaucrat b1("Edward");

		Form form("Intership", 150, 20);
		
		std::cout << form << std::endl;
		b1.signForm(form);
		std::cout << form << std::endl;
		
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n";
	try
	{
		Bureaucrat b1("Edward");

		Form form("Car_Renting", 10, 20);
		
		std::cout << form << std::endl;
		b1.signForm(form);
		std::cout << form << std::endl;
		
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n";
	try
	{
		Bureaucrat b1("Boss", 1);

		Form form("Car_Renting", 10, 20);
		
		std::cout << form << std::endl;
		b1.signForm(form);
		std::cout << form << std::endl;
		
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}