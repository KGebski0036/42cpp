/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:21:21 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/05 20:32:55 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequest", 72, 45), _target("Empty") { }

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequest", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& original) : 
AForm(original.getName(), original.getSignLevel(), original.getExecuteLevel()),
_target(original._target)
{}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& original)
{
	_target = original._target;
	return *this;
}

void RobotomyRequestForm::action() const
{
	std::cout << YELLOW << "*drilling noises*\n" << NC;
	srand (time(NULL));
	if (rand() % 2 == 0)
		std::cout << GREEN << _target << " has been robotomized successfully\n" << NC;
	else
		std::cout << RED << _target << " robotomized failed\n" << NC;
	
}

std::string RobotomyRequestForm::getTarget() const { return _target; }

RobotomyRequestForm::~RobotomyRequestForm() {}
