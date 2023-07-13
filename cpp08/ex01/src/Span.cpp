/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:08:35 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/10 11:28:26 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(size_t N) : _max_size(N) {}
Span::~Span() {}

Span::Span(const Span& original) : _max_size(original._max_size)
{
	_array = original._array;
}

Span& Span::operator=(const Span& original)
{
	_max_size = original._max_size;
	for (size_t i = 0; i < _max_size; i++)
		_array[i] = original._array[i];
	return *this;
}

void Span::addNumber(int newNumber)
{
	if (_array.size() >= _max_size)
		throw std::exception();
	_array.push_back(newNumber);
}

void Span::addNumber(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end)
{
	if (_array.size() + distance(begin, end) > _max_size)
		throw std::exception();
	_array.insert(_array.end(), begin, end);
}

int Span::shortestSpan()
{
	if (_array.size() < 2)
		throw std::exception();
		
	int min = 0;
	for(size_t i = 0; i < _array.size(); i++)
	{
		for(size_t j = i + 1; j < _array.size(); j++)
		{
			if (abs(_array[i] - _array[j]) < min || (i == 0 && j == 1))
				min = abs(_array[i] - _array[j]);
		}
	}
	return min;
}

int Span::longestSpan()
{
	if (_array.size() < 2)
		throw std::exception();
	return abs(
		*std::max_element(_array.begin(), _array.end())
		- *std::min_element(_array.begin(), _array.end())
	);
}

Span::Span() {}