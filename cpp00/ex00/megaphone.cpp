/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 13:32:09 by kgebski           #+#    #+#             */
/*   Updated: 2023/06/29 14:17:16 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string trim_and_upper_str(char *str);

int main(int argc, char* argv[])
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		std::cout << trim_and_upper_str(argv[i]);
		if (i + 1 != argc)
			std::cout << " ";
	}
	std::cout << std::endl;
}

std::string trim_and_upper_str(char *str)
{
	std::string result = ""; 
	
	int i = 0;
	while (str[i] && str[i] == ' ')
		i++;
	while (str[i])
	{
		while (str[i] && str[i] != ' ')
			result += toupper(str[i++]);
		while (str[i] && str[i] == ' ')
			i++;
		if (str[i])
			result += " ";
	}
	return (result);
}
