/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 14:26:43 by kgebski           #+#    #+#             */
/*   Updated: 2023/06/30 12:38:50 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <exception>

#include "Contact.hpp"

class PhoneBook
{
  public:
	PhoneBook();
	~PhoneBook();

	void 		AddContact();
	void 		Search();
	void 		DisplayHeader();
	std::string	ShortStr(std::string str);
	void		ShowContact(int index);

  private:
	Contact		_contacts_tab[8];
	int			_current_contact_index;
	
	std::string	GetField(std::string prompt);
};

