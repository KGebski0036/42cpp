/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:50:55 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/05 20:37:33 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string name, int sign_level, int exec_level) : _name(name), _sign_level(sign_level), _execute_level(exec_level) 
{
	_is_signed = false;
}

std::string	AForm::getName() const { return _name; }
int			AForm::getSignLevel() const { return _sign_level; }
int			AForm::getExecuteLevel() const { return _execute_level; }
bool		AForm::getIsSigned() const { return _is_signed; }

void AForm::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > _sign_level)
		throw GradeTooLowException();
	_is_signed = true;
}

const char*  AForm::GradeTooHighException::what() const throw() { return  "Grade too high"; }
const char*  AForm::GradeTooLowException::what() const throw() { return "Grade too low"; }
const char*  AForm::NotSignedExeption::what() const throw() { return "The form is not signed"; }

void AForm::execute(Bureaucrat const & executor) const
{
	if (!getIsSigned())
	{
		throw NotSignedExeption();
	}
	else
	{
		if (getExecuteLevel() < executor.getGrade())
			throw GradeTooLowException();
		else
			action();
	}
}

AForm::~AForm() {}

std::ostream& operator<<(std::ostream& out, const AForm* rhs)
{
	out << DARKBLUE << rhs->getName() << BLUE << ", form with sing grade: " 
		<< YELLOW << rhs->getSignLevel() << BLUE << " and execute level: "  
		<< YELLOW << rhs->getExecuteLevel() << (rhs->getIsSigned() ? GREEN : RED)
		<< " is " << (rhs->getIsSigned() ? "" : "not ") << "signed";
	return out;
}