/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 16:12:47 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/01 15:05:11 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Harl.hpp"
#include "Colors.hpp"

int main()
{
	Harl harl;
	std::string tab_of_levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};
	
	//Start conversation
	for (int i = 0; ; i++)
	{
		harl.complain( tab_of_levels[std::rand() % 4]);
	}
	return (0);
}
