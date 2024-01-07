/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:37:24 by kgebski           #+#    #+#             */
/*   Updated: 2024/01/07 02:43:44 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Bureaucrat
{
  public:
	Bureaucrat();
	Bureaucrat(std::string name);
	Bureaucrat(const Bureaucrat& original);
	~Bureaucrat();
	Bureaucrat& operator=(const Bureaucrat& original);

	std::string	getName() const;
	int			getGrade() const;

	void incrementGrade();
	void decrementGrade();

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
