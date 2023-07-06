/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:34:26 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/04 15:01:06 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	_brain = new Brain();
	std::cout << GREEN << "You create an cat :D\n" << NC;
}

Cat::Cat(const Cat& original)
{
	_type = original.getType();
	_brain = new Brain(*original._brain);
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

Brain* Cat::getBrain() { return _brain; }

Cat::~Cat()
{
	delete _brain;
	std::cout << RED << "Cat was destroyed\n" << NC;
}

