/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 16:47:37 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/01 19:11:28 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	std::cout << GREEN << "Default constructor called\n" << NC;
}

Fixed::Fixed(const Fixed &original)
{
	std::cout << MAGENTA << "Copy constructor called\n" << NC;
	_value = original.getRawBits();
}

Fixed &Fixed::operator= (const Fixed &original)
{
	std::cout << DARKBLUE << "Copy assignment operator called\n" << NC;
	if (this != &original)
		setRawBits(original.getRawBits());
	return (*this);
}

int Fixed::getRawBits() const
{
	std::cout << YELLOW << "getRawBits member function called\n" << NC;
	return _value;
}
void Fixed::setRawBits(const int raw){_value = raw;}

Fixed::~Fixed() 
{
	std::cout << RED << "Default constructor called\n" << NC;
}
