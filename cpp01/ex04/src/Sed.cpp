/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 13:31:20 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/01 13:49:48 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed() {}

void Sed::replace(std::string file, std::string to_replace, std::string replace)
{
	std::ifstream input(file);
	
	if (!input.is_open())
	{
		std::cerr << ERROR << " Coudnt open a file" << NC << std::endl;
		return ;
	}
	
	std::string buffer;
	
	getline(input, buffer, '\0');
	
	if (buffer.empty())
	{
		std::cerr << ERROR << " File is empty" << NC << std::endl;
		return ;
	}
	
	size_t pos = buffer.find(to_replace);
	
	while (pos != std::string::npos)
	{
		buffer.erase(pos, to_replace.length());
		buffer.insert(pos, replace);
		pos = buffer.find(to_replace);
	}
	
	std::ofstream output(file + ".replace");
	output << buffer;
	
	output.close();
	input.close();
}

Sed::~Sed() {}