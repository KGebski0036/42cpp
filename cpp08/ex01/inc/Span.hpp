/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:05:01 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/10 11:23:33 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <cstddef>
#include <exception>
#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

class Span
{
  public:
	Span(size_t N);
	~Span();
	Span( const Span& );

	Span& operator=( const Span& );
	void addNumber(int newNumber);
	void addNumber(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end);
	int shortestSpan();
	int longestSpan();
  private:
	Span();
	std::vector<int> _array;
	size_t _max_size;
};

