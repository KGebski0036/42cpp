/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:50:55 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/05 16:40:44 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default"), _sign_level(150), _execute_level(150)
{
	_is_signed = false;
}

Form::Form(std::string name, int sign_level, int execute_level): _name(name), _sign_level(sign_level), _execute_level(execute_level)
{
	if (sign_level > 150 || execute_level > 150)
		throw GradeTooLowException();
	if (sign_level < 0 || execute_level < 0)
		throw GradeTooHighException();
	_is_signed = false;
}

Form::Form(const Form& original) : _name(original._name), _sign_level(original._sign_level), _execute_level(original._execute_level)
{
	_is_signed = original._is_signed;
}

Form& Form::operator=(const Form& original)
{
	_is_signed = original._is_signed;
	return *this;
}

std::string	Form::getName() const { return _name; }
int			Form::getSignLevel() const { return _sign_level; }
int			Form::getExecuteLevel() const { return _execute_level; }
bool		Form::getIsSigned() const { return _is_signed; }

void Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > _sign_level)
		throw GradeTooLowException();
	_is_signed = true;
}

const char*  Form::GradeTooHighException::what() const throw() { return  "Grade too high"; }
const char*  Form::GradeTooLowException::what() const throw() { return "Grade too low"; }

Form::~Form() {}

std::ostream& operator<<(std::ostream& out, const Form& rhs)
{
	out << DARKBLUE << rhs.getName() << BLUE << ", form with sing grade: " 
		<< YELLOW << rhs.getSignLevel() << BLUE << " and execute level: "  
		<< YELLOW << rhs.getExecuteLevel() << (rhs.getIsSigned() ? GREEN : RED)
		<< " is " << (rhs.getIsSigned() ? "" : "not ") << "signed";
	return out;
}