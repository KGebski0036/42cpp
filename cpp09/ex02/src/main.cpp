/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student42 <student42@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:28:13 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/13 18:14:41 by student42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>

#include "Colors.hpp"
#include "PmergeMe.hpp"


int main(int argc, char *argv[])
{	
	if (argc < 2)
	{
		std::cout << RED << "Provide numbers as an arguments.\n" << NC;
		return 0;
	}
	
	PmergeMe sorter;
	
	try 
	{
		sorter.readInput(argc, argv);
		
		std::cout << MAGENTA << "Before: \n";
		sorter.printContainer();
		
		std::clock_t start_vec = std::clock();
		sorter.sortVector();
		std::clock_t end_vec = std::clock();

		
		std::clock_t start_deq = std::clock();
		sorter.sortDeque();
		std::clock_t end_deq = std::clock();
		
		std::cout << MAGENTA << "After: \n";
		sorter.printContainer();

		std::cout << YELLOW << "[Vector] " << BLUE << "Time to process a range of " 
			<< DARKBLUE << argc - 1 << BLUE <<" elements: " 
			<< ((end_vec - start_vec) * 1000000 / CLOCKS_PER_SEC) << "µs\n";
			
		std::cout << YELLOW << "[Deque]  " << BLUE << "Time to process a range of " 
			<< DARKBLUE << argc - 1 << BLUE <<" elements: " 
			<< ((end_deq - start_deq) * 1000000  / CLOCKS_PER_SEC) << "µs\n";
	}
	catch(...)
	{
		std::cerr << RED << "Error\n" << NC;
		return 1;
	}
	
	return (0);
}
