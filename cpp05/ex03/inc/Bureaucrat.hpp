/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:37:24 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/05 17:46:32 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

#include "AForm.hpp"
#include "Colors.hpp"

class AForm;

class Bureaucrat
{
  public:
	Bureaucrat();
	Bureaucrat(std::string name);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat& original);
	~Bureaucrat();
	Bureaucrat& operator=(const Bureaucrat& original);
	
	std::string	getName() const;
	int			getGrade() const;
	
	void incrementGrade();
	void decrementGrade();
	
	void signForm(AForm* form);
	void executeForm(AForm const & form);
	
	struct GradeTooHighException : public std::exception
	{
		virtual const char* what() const _NOEXCEPT;
	};

	struct GradeTooLowException : public std::exception
	{
		virtual const char* what() const _NOEXCEPT; 
	};

  private:
	const std::string	_name;
	int					_grade;
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& rhs);
