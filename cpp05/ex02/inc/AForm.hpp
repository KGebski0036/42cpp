/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:50:07 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/05 17:44:19 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"
#include "Colors.hpp"

class Bureaucrat;

class AForm
{
  public:
	AForm(std::string name, int sign_level, int exec_level);
	virtual ~AForm();
	
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
	
	struct NotSignedExeption : public std::exception
	{
		virtual const char* what() const _NOEXCEPT; 
	};

	void execute(Bureaucrat const & executor) const;
	virtual void action() const = 0;
	
  private:
	const std::string	_name;
	const int			_sign_level;
	const int			_execute_level;
	bool				_is_signed;
};

std::ostream& operator<<(std::ostream& out, const AForm* rhs);

