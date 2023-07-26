/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:28:13 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/12 14:25:35 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Colors.hpp"
#include "BitcoinExchange.hpp"

#define DATA_FILE "data.csv"

int main(int argc, char *argv[])
{	
	if (argc != 2)
	{
		std::cout << RED << "Provide file as an argument.\n" << NC;
		return 0;
	}
	
	BitcoinExchange btc = BitcoinExchange(DATA_FILE);
	btc.ShowMyIncome(argv[1]);
	return (0);
}
