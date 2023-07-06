/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 16:47:37 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/02 14:16:23 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <math.h>

Fixed::Fixed() : _value(0) {}

Fixed::Fixed(const int value)
{
	_value = value << _fractional_bits;
}

Fixed::Fixed(const float value) 
{
	_value = roundf(value * (1 << _fractional_bits));
}

Fixed::Fixed(const Fixed &original)
{
	_value = original.getRawBits();
}

Fixed &Fixed::operator= (const Fixed &original)
{
	if (this != &original)
		setRawBits(original.getRawBits());
	return (*this);
}

bool Fixed::operator>(Fixed const &secound)
{
	return (_value > secound.getRawBits());
}
bool Fixed::operator<(Fixed const &secound)
{
	return (_value < secound.getRawBits());
}
bool Fixed::operator<=(Fixed const &secound)
{
	return (_value <= secound.getRawBits());
}
bool Fixed::operator>=(Fixed const &secound)
{
	return (_value >= secound.getRawBits());
}
bool Fixed::operator==(Fixed const &secound)
{
	return (_value == secound.getRawBits());
}
bool Fixed::operator!=(Fixed const &secound)
{
	return (_value != secound.getRawBits());
}
Fixed Fixed::operator+(Fixed const &secound)
{
	return Fixed(this->toFloat() + secound.toFloat());
}
Fixed Fixed::operator-(Fixed const &secound)
{
	return Fixed(this->toFloat() - secound.toFloat());
}
Fixed Fixed::operator*(Fixed const &secound)
{
	return Fixed(this->toFloat() * secound.toFloat());
}
Fixed Fixed::operator/(Fixed const &secound)
{
	return Fixed(this->toFloat() / secound.toFloat());
}
Fixed Fixed::operator++()
{
	this->_value++;
	return (*this);
}
Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	this->_value++;
	return (tmp);
}
Fixed Fixed::operator--()
{
	this->_value--;
	return (*this);
}
Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	this->_value--;
	return (tmp);
}

int Fixed::getRawBits() const { return _value; }
void Fixed::setRawBits(const int raw){_value = raw;}

int Fixed::toInt() const
{
	return (_value >> _fractional_bits);
}
float Fixed::toFloat() const
{
	return ((float)_value / (float)(1 << _fractional_bits));
}

Fixed &Fixed::min(Fixed &first, Fixed &secound)
{
	return ( first > secound ? secound : first);
}
Fixed const &Fixed::min(Fixed const &first, Fixed const &secound)
{
	return ( first.getRawBits() > secound.getRawBits() ? secound : first);
}
Fixed &Fixed::max(Fixed &first, Fixed &secound)
{
	return ( first < secound ? secound : first);
}
Fixed const &Fixed::max(Fixed const &first, Fixed const &secound)
{
	return ( first.getRawBits() < secound.getRawBits() ? secound : first);
}

std::ostream &operator<<(std::ostream &stream, Fixed const &value)
{
	stream << value.toFloat();
	return (stream);
}

Fixed::~Fixed() {}