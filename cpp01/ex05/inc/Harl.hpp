/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:00:17 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/01 15:00:51 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <unistd.h>
#include <ctime>
#include "Colors.hpp"

class Harl
{
  public:
	Harl();
	~Harl();
	
	void complain(std::string level);

  private:
	std::string _debug_texts[4];
	std::string _info_texts[2];
	std::string _warning_texts[2];
	std::string _error_texts[3];
	
	void debug();
	void info();
	void warning();
	void error();
};
