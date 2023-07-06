/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 17:37:44 by kgebski           #+#    #+#             */
/*   Updated: 2023/06/30 17:43:43 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	
	std::cout << "\nMemory: \n"
	<< "original:   " << &str << "\n"
	<< "pointer:    " << &stringPTR << "\n"
	<< "refference: " << &stringREF << "\n\n";

	std::cout << "Value: \n"
	<< "original:   " << str << "\n"
	<< "pointer:    " << *stringPTR << "\n"
	<< "refference: " << stringREF << "\n";
	return 0;
}
