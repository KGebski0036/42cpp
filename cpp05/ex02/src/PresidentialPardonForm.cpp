/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:21:21 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/05 18:27:53 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardon", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardon", 25, 5),  _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& original) : 
AForm(original.getName(), original.getSignLevel(), original.getExecuteLevel()),
_target(original._target)
{}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& original)
{
	_target = original._target;
	return *this;
}

void PresidentialPardonForm::action() const
{
	std::cout << YELLOW << _target << " has been pardoned by Zaphod Beeblebrox.\n" << NC;
}

std::string PresidentialPardonForm::getTarget() const { return _target; }

PresidentialPardonForm::~PresidentialPardonForm() {}
