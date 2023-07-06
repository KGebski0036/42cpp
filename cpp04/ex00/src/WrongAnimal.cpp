/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:26:34 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/04 13:06:13 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	std::cout << GREEN << "You create an WrongAnimal :D\n" << NC;
}

WrongAnimal::WrongAnimal(const WrongAnimal& original)
{
	_type = original.getType();
	std::cout << GREEN << "You create an WrongAnimal :D\n" << NC;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& original)
{
	_type = original.getType();
	return *this;
}

std::string WrongAnimal::getType() const { return _type;}
void WrongAnimal::setType(std::string type) { _type = type; }

void WrongAnimal::makeSound() const
{
	std::cout << DARKBLUE << " ... \n" << NC;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << RED << "WrongAnimal was destroyed\n" << NC;
}