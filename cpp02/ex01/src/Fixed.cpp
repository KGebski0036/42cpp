/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 16:47:37 by kgebski           #+#    #+#             */
/*   Updated: 2024/01/07 00:17:09 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	std::cout << GREEN << "Default constructor called\n" << NC;
}

Fixed::Fixed(const int value)
{
	std::cout << DARKBLUE << "Int " << GREEN << "constructor called\n" << NC;
	_value = value << _fractional_bits;
}

Fixed::Fixed(const float value)
{
	std::cout << DARKBLUE << "Float " << GREEN << "constructor called\n" << NC;
	_value = roundf(value * (1 << _fractional_bits));
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

int Fixed::toInt() const
{
	return (_value >> _fractional_bits);
}

float Fixed::toFloat() const
{
	return ((float)_value / (float)(1 << _fractional_bits));
}

std::ostream &operator<<(std::ostream &stream, Fixed const &value)
{
	stream << value.toFloat();
	return (stream);
}
