/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:28:13 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/09 14:57:57 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Colors.hpp"
#include "whatever.hpp"

int main()
{
	int a = 4;
	int b = 2;
	std::string x = "Wolfs";
	std::string y = "burg";
	
	std::cout << DARKBLUE << "Before swap: \n";
	std::cout << GREEN << "a: " << a << " b: " << b << "\n";
	std::cout << GREEN << "x: " << x << " y: " << y << "\n";

	swap(a, b);
	swap(x, y);
	//! swap(a, x);
	
	std::cout << DARKBLUE << "After swap: \n";
	std::cout << GREEN << "a: " << a << " b: " << b << "\n";
	std::cout << GREEN << "x: " << x << " y: " << y << "\n\n";
	

	std::cout << GREEN << "min: " << min(a,b) << "\n";
	std::cout << GREEN << "max: " << max(a,b) << "\n";
	
	return (0);
}