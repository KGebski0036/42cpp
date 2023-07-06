/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 13:30:29 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/01 13:43:34 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <fstream>
#include <iostream>
#include "Colors.hpp"

class Sed
{
  public:
	Sed();
	~Sed();
	
	void replace(std::string file, std::string to_replace, std::string replace);
};
