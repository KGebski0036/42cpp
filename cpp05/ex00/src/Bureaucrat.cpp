/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:38:52 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/05 15:22:34 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _grade(150) {}

Bureaucrat::Bureaucrat(std::string name) : _name(name), _grade(150) {}

Bureaucrat::Bureaucrat(const Bureaucrat& original) : _name(original._name)
{
	_grade = original._grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& original)
{
	_grade = original._grade;
	return *this;
}

std::string	Bureaucrat::getName() const { return _name; }
int			Bureaucrat::getGrade() const { return _grade; }
	
void Bureaucrat::incrementGrade()
{
	if (_grade - 1 < 1)
	{
		throw GradeTooHighException();
	}
	_grade--;
}
void Bureaucrat::decrementGrade()
{
	if (_grade + 1 > 150)
	{
		throw GradeTooLowException();
	}
	_grade++;
}

const char*  Bureaucrat::GradeTooHighException::what() const throw() { return  "Grade too high\n"; }
const char*  Bureaucrat::GradeTooLowException::what() const throw() { return "Grade too low\n"; }

Bureaucrat::~Bureaucrat() {}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& rhs)
{
	out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return out;
}

