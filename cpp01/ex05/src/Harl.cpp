/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:00:47 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/01 15:02:40 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	_debug_texts[0] = "I can't get oxygen through a mask.";
	_debug_texts[1] = "But, that doesn't apply to me.";
	_debug_texts[2] = "Do you know how much money I spend here every month?";
	_debug_texts[3] = "Do you live in this area?";
	
	_info_texts[0] = "My name is misspelled on the cup.";
	_info_texts[1] = "I've been discriminated against.";

	_warning_texts[0] = "May I speak to your manager?";
	_warning_texts[1] = "I want to talk to the owner.";


	_error_texts[0] = "That's unacceptable!";
	_error_texts[1] = "You ruined my family's entire vacation!";
	_error_texts[2] = "You just lost our business!";

	std::srand(std::time(0));
}

void Harl::complain(std::string level)
{
	std::string tab_of_levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*functions[4])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	
	for (int i = 0; i < 4; i++)
	{
		if (tab_of_levels[i] == level)
		{
			(this->*(functions[i]))();
			usleep(500000);
			return ;
		}
	}
	std::cerr << ERROR << " Uncompatibile type";
}

void Harl::debug()
{
	std::cout << YELLOW << _debug_texts[std::rand() % 4] << NC << "\n";
}
void Harl::info()
{
	std::cout << DARKBLUE << _info_texts[std::rand() % 2] << NC << "\n";
}
void Harl::warning()
{
	std::cout << MAGENTA << _warning_texts[std::rand() % 2] << NC << "\n";
}
void Harl::error()
{
	std::cout << RED << _error_texts[std::rand() % 3] << NC << "\n";
}

Harl::~Harl() {}