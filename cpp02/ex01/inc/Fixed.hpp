/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 16:40:58 by kgebski           #+#    #+#             */
/*   Updated: 2024/01/07 00:17:21 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <math.h>
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

	int getRawBits() const;
	void setRawBits(const int raw);

	float toFloat(void) const;
	int toInt(void) const;

  private:
	int _value;
	static const int _fractional_bits = 8;
};
