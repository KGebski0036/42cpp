/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 14:26:28 by kgebski           #+#    #+#             */
/*   Updated: 2023/06/30 12:50:52 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Colors.hpp"

PhoneBook::PhoneBook() : _current_contact_index(0) {}

void PhoneBook::AddContact()
{
	Contact newContact;
	
	newContact.first_name = GetField("First name: ");
	newContact.last_name = GetField("Last name: ");
	newContact.nickname = GetField("Nickname: ");
	newContact.phone_number = GetField("Phone number: ");
	newContact.darkest_secret = GetField("Darkest secret: ");
	
	std::cout << GREEN << " --{ Contact added }-- \n" << NC;
	
	_contacts_tab[_current_contact_index % 8] = newContact;
	_current_contact_index++;
}

void PhoneBook::Search()
{
	if (_current_contact_index == 0)
	{
		std::cout << RED << "Contact list is empty\n" << NC; 
		return ;
	}
	
	int i = 0;
	DisplayHeader();
	
	while(i < 8 && _contacts_tab[i].first_name != "")
	{
		std::cout << "|" << DARKBLUE << std::setw(10) << i << NC
			<< "|" << BLUE << std::setw(10) << ShortStr(_contacts_tab[i].first_name) << NC
			<< "|" << BLUE << std::setw(10) << ShortStr(_contacts_tab[i].last_name) << NC
			<< "|" << BLUE << std::setw(10) << ShortStr(_contacts_tab[i].nickname) << NC
			<< "|" << std::endl;
		i++;
	}
	std::cout << "‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾\n";
	
	int display_contact_index;
	try {
		display_contact_index = std::stoi(GetField("Index of contact to display: "));
	}catch (...)
	{
		std::cout << RED << "Index is invalid number\n" << NC;
		return;
	}
	
	ShowContact(display_contact_index);
}

void PhoneBook::DisplayHeader()
{
	std::cout << std::endl;
	std::cout << "____________________________________________"
		<< std::endl
		<< "|" << MAGENTA << "  Index   " << NC
		<< "|" << MAGENTA << "First Name" << NC
		<< "|" << MAGENTA << "Last  Name" << NC
		<< "|" << MAGENTA << " Nickname " << NC
		<< "|" << std::endl;

}

std::string PhoneBook::ShortStr(std::string str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

void PhoneBook::ShowContact(int index)
{
	if (index + 1 > _current_contact_index || index > 7 || index < 0)
	{
		std::cout << RED << "Index is invalid\n" << NC;
		return ;
	}
	std::cout
	<< MAGENTA << "First name: "
	<< BLUE << _contacts_tab[index].first_name << std::endl
	<< MAGENTA << "Last name: "
	<< BLUE << _contacts_tab[index].last_name  << std::endl
	<< MAGENTA << "Nickname: "
	<< BLUE << _contacts_tab[index].nickname << std::endl
	<< MAGENTA << "Phonenumber: "
	<< BLUE << _contacts_tab[index].phone_number << std::endl
	<< MAGENTA << "Darkest secret: "
	<< BLUE << _contacts_tab[index].darkest_secret << NC << std::endl << std::endl;
}

std::string PhoneBook::GetField(std::string prompt)
{
	std::string input = "";
	
	do {
		std::cout << GREEN << prompt << NC;
		getline(std::cin, input, '\n');
	}
	while (input == "");
	
	return (input);
}

PhoneBook::~PhoneBook() {}