/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:44:37 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/05 20:28:02 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}
Intern::Intern(const Intern& original) { (void)original; }
Intern::~Intern() {}
Intern& Intern::operator=(const Intern& original) { (void)original; return *this; }

AForm* Intern::makeForm(std::string name, std::string target)
{
	
	
	AForm* forms[] = {
		new RobotomyRequestForm(target),
		new PresidentialPardonForm(target),
		new ShrubberyCreationForm(target)
	};
	
	std::string form_names[3] = {"RobotomyRequestForm", "PresidentialPardonForm", "ShrubberyCreationForm"};
	
	for(int i = 0; i < 3; i++)
	{
		if (name == form_names[i])
		{
			for(int j = 0; j < 3; j++)
				if (j != i)
					delete forms[j];
			std::cout << GREEN << "Intern creates " << name << "\n" << NC;
			return forms[i];
		}
	}
	for(int j = 0; j < 3; j++)
		delete forms[j];
	std::cout << RED << "Intern cannot find form " << name << "\n" << NC;
	return 0;
}