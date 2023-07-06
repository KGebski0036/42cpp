/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 16:12:47 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/01 13:50:53 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sed.hpp"
#include "Colors.hpp"

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << ERROR << " WRONG NUMBER OF ARGUMENTS" << NC << std::endl;
		return (1);
	}
	else {
		Sed sed;
		std::string file = argv[1];
		std::string to_replace = argv[2];
		std::string replace = argv[3];
		sed.replace(file, to_replace, replace);
	}
	return (0);
}
