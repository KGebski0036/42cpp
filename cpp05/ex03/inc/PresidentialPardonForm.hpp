/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:03:19 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/05 18:13:08 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
  public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm& original);
	~PresidentialPardonForm();
	PresidentialPardonForm& operator=(const PresidentialPardonForm& original);
	
	std::string getTarget() const;
	void action() const;
	
  private:
	std::string _target;
};

