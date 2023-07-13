/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:28:13 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/09 15:08:16 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Colors.hpp"
#include "iter.hpp"


void display(std::string& s)
{
	std::cout << s;
}

void display(int& i)
{
	std::cout << i << " ";
}

void addOne(int& i)
{
	i++;
}

int main()
{
	int int_array[] = {1, 2, 3, 4, 5, 6, 7}; 
	std::string string_array[] = {"I ", "Love ", "C", "++\n"}; 
	
	iter(int_array, 7, addOne);
	iter(int_array, 7, display);
	std::cout << "\n" << GREEN;
	iter(string_array, 4, display);
	return (0);
}