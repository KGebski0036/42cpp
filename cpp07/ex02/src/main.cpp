/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:28:13 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/09 16:46:36 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Colors.hpp"
#include "Array.hpp"

template<typename T>
std::ostream& operator<<(std::ostream& os, const Array<T>& dt)
{
	os << BLUE << "Array of size: " << MAGENTA << dt.size() << "\n";
	os << BLUE << "Members: \n";
	for (size_t i = 0; i < dt.size(); i++)
		os << GREEN << dt[i] << " ";
	os << "\n" << NC;
	return os;
}

int main()
{
	// Array<int> tab;
	// Array<int> tab2(10);
	// Array<int> tab3(tab2);
	
	// std::cout << tab;
	// std::cout << tab2 << "\n";
	
	// tab3[2] = 47;
	// std::cout << tab3 << "\n";
	
	// try
	// {
	// 	tab3[10];
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << RED << "Task failed successfully" << '\n';
	// }
	
	Array<int> numbers(750);
    int* mirror = new int[750];
    srand(time(NULL));
    for (int i = 0; i < 750; i++)
    {
        const int value = rand() % 25;
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < 750; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[750] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < 750; i++)
    {
        numbers[i] = rand() % 25;
    }
	std::cout << numbers;
    delete [] mirror;//
	
	return (0);
}