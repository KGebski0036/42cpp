/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 16:40:58 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/01 17:09:33 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Colors.hpp"

class Fixed
{
  public:
	Fixed();
	Fixed(const Fixed &original);
	~Fixed();
	
	Fixed &operator= (const Fixed &original);
	
	int getRawBits() const;
	void setRawBits(const int raw);

  private:
	int _value;
	static const int _fractional_bits = 8;
};
