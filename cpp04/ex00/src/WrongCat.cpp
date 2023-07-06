/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:34:26 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/04 13:07:30 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << GREEN << "You create an WrongCat :D\n" << NC;
}

WrongCat::WrongCat(const WrongCat& original)
{
	_type = original.getType();
	std::cout << GREEN << "You create an WrongCat :D\n" << NC;
}


WrongCat& WrongCat::operator=(const WrongCat& original)
{
	_type = original.getType();
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << DARKBLUE << "Miau miau k***a\n" << NC;
}

WrongCat::~WrongCat()
{
	std::cout << RED << "WrongCat was destroyed\n" << NC;
}
