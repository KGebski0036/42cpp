/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:34:26 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/04 13:02:22 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	std::cout << GREEN << "You create an cat :D\n" << NC;
}

Cat::Cat(const Cat& original)
{
	_type = original.getType();
	std::cout << GREEN << "You create an cat :D\n" << NC;
}


Cat& Cat::operator=(const Cat& original)
{
	_type = original.getType();
	return *this;
}

void Cat::makeSound() const
{
	std::cout << DARKBLUE << "Miau miau k***a\n" << NC;
}

Cat::~Cat()
{
	std::cout << RED << "Cat was destroyed\n" << NC;
}
