/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 16:40:58 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/01 19:44:28 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Colors.hpp"

class Fixed
{
  public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed &original);
	~Fixed();
	
	Fixed &operator= (const Fixed &original);
	
	bool operator>(Fixed const &secound);
	bool operator<(Fixed const &secound);
	bool operator>=(Fixed const &secound);
	bool operator<=(Fixed const &secound);
	bool operator==(Fixed const &secound);
	bool operator!=(Fixed const &secound);
	Fixed operator+(Fixed const &secound);
	Fixed operator-(Fixed const &secound);
	Fixed operator*(Fixed const &secound);
	Fixed operator/(Fixed const &secound);
	Fixed operator++();
	Fixed operator++(int);
	Fixed operator--();
	Fixed operator--(int);

	static Fixed &min(Fixed &first, Fixed &secound);
	static Fixed const &min(Fixed const &first, Fixed const &secound);
	static Fixed &max(Fixed &first, Fixed &secound);
	static Fixed const &max(Fixed const &first, Fixed const &secound);
	
	int getRawBits() const;
	void setRawBits(const int raw);
	
	float toFloat(void) const;
	int toInt(void) const;

  private:
	int _value;
	static const int _fractional_bits = 8;
};
