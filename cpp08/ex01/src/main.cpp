/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:28:13 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/10 11:29:18 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Colors.hpp"
#include "Span.hpp"

int main()
{	
	srand (time(NULL));
	Span sp = Span(10000);
	
	sp.addNumber(6);

	try
	{
		sp.longestSpan();
	}
	catch (std::exception e)
	{
		std::cout << RED << "Task failed successfully\n" << NC;
	}
	try
	{
		sp.shortestSpan();
	}
	catch (std::exception e)
	{
		std::cout << RED << "Task failed successfully twice\n" << NC;
	}
	
	for (int i = 0; i < 9999; i++)
	{
		sp.addNumber(rand() % 99999999);
	}
	
	try
	{
		sp.addNumber(42);
	}
	catch (std::exception e)
	{
		std::cout << RED << "Task failed successfully again\n" << NC;
	}
	std::cout << "\n";

	std::cout << DARKBLUE << "Shortest distance: " << GREEN << sp.shortestSpan() << std::endl;
	std::cout << DARKBLUE << "Longest distance: " << GREEN << sp.longestSpan() << std::endl << NC;
	
	std::cout << "\n";

	Span sp2 = Span(10);
	std::vector<int> v(20, 20);
	
	try
	{
		sp2.addNumber(v.begin(), v.end());
	}
	catch (std::exception e)
	{
		std::cout << RED << "Task failed once again\n" << NC;
	}
	
	std::vector<int> v2(10, 10);
	sp2.addNumber(v2.begin(), v2.end());

	return (0);
}