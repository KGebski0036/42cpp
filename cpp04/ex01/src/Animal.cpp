/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:26:34 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/04 13:53:30 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << GREEN << "You create an animal :D\n" << NC;
}

Animal::Animal(const Animal& original)
{
	_type = original.getType();
	std::cout << GREEN << "You create an animal :D\n" << NC;
}

Animal& Animal::operator=(const Animal& original)
{
	_type = original.getType();
	return *this;
}

std::string Animal::getType() const { return _type;}
void Animal::setType(std::string type) { _type = type; }

void Animal::makeSound() const
{
	std::cout << DARKBLUE << " ... \n" << NC;
}

Animal::~Animal()
{
	std::cout << RED << "Animal was destroyed\n" << NC;
}