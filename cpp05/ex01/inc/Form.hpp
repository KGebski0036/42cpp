/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:50:07 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/05 16:34:43 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"
#include "Colors.hpp"

class Bureaucrat;

class Form
{
  public:
	Form();
	Form(std::string name, int sign_level, int execute_level);
	Form(const Form& original);
	~Form();
	Form& operator=(const Form& original);
	
	std::string	getName() const;
	int			getSignLevel() const;
	int			getExecuteLevel() const;
	bool		getIsSigned() const;
	
	void beSigned(const Bureaucrat& bureaucrat);

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
	const int			_sign_level;
	const int			_execute_level;
	bool				_is_signed;
};

std::ostream& operator<<(std::ostream& out, const Form& rhs);

