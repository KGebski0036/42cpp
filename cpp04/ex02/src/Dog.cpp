/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:34:26 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/04 13:53:56 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << GREEN << "You create an dog :D\n" << NC;
}

Dog::Dog(const Dog& original)
{
	_type = original.getType();
	std::cout << GREEN << "You create an dog :D\n" << NC;
}


Dog& Dog::operator=(const Dog& original)
{
	_type = original.getType();
	return *this;
}

void Dog::makeSound() const
{
	std::cout << DARKBLUE << "Bark bark\n" << NC;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << RED << "Dog was destroyed\n" << NC;
}