/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:28:13 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/05 20:36:17 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "Colors.hpp"

int main()
{
	try
	{
		Bureaucrat boss("Boss", 1);
		Bureaucrat senior("Senior", 10);
		Bureaucrat junior("Junior", 143);
		Intern intern;
		
		AForm *form1 = intern.makeForm("ShrubberyCreationForm", "home");
		AForm *form2 = intern.makeForm("RobotomyRequestForm", "Cat");
		AForm *form3 = intern.makeForm("PresidentialPardonForm", "Ralf");
		
		AForm *form4 = intern.makeForm("bruch", "aaa");
		if (form4 != 0)
			delete form4;
		std::cout << "\n";

		std::cout << form1 << "\n";
		junior.signForm(form1);
		std::cout << form1 << "\n";
		junior.executeForm(*form1);
		std::cout << "\n\n";
		
		senior.signForm(form1);
		std::cout << form1 << "\n";
		senior.executeForm(*form1);
		std::cout << form1 << "\n\n";
		
		senior.signForm(form2);
		senior.executeForm(*form2);
		std::cout << "\n\n";
		
		std::cout << form3 << "\n";
		senior.signForm(form3);
		senior.executeForm(*form3);
		
		std::cout << form3 << "\n";
		boss.executeForm(*form3);
		
		delete form1;
		delete form2;
		delete form3;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}