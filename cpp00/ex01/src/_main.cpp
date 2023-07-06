/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _main.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 14:26:31 by kgebski           #+#    #+#             */
/*   Updated: 2023/06/30 11:57:47 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Colors.hpp"

int main()
{
	std::string	input;
	PhoneBook	phone_book;

	std::cout << "Available commends: "<< DARKBLUE << "(ADD) (SEARCH) (EXIT)" << NC << std::endl;
	while (true)
	{
		std::cout << BLUE << "Provide one of commends: " << NC;
		getline(std::cin, input, '\n');
		
		if (input == "ADD")
			phone_book.AddContact();
		else if (input == "SEARCH")
			phone_book.Search();
		else if (input == "EXIT")
			break;
		else
			std::cout << RED << "Unrecognized command\n" << NC;
	}
	return (0);
}
