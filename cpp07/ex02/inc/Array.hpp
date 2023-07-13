/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:42:40 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/09 15:34:16 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<typename T>
class Array
{
  public:
	Array() : _array(new T), _size(0) {};
	Array(size_t n) : _array(new T[n]), _size(n) {};
	
	Array(const Array& rhs) : _array(new T[rhs.size()]), _size(rhs.size())
	{
		for (size_t i = 0; i < _size; i++)
			_array[i] = rhs._array[i];
	};
	
	~Array() { delete [] _array; }

	Array& operator=( const Array& rhs )
	{
		delete [] _array;
		_array = new T[rhs.size()];
		_size = rhs.size();
		for (size_t i = 0; i < _size; i++)
			_array[i] = rhs._array[i];
		return *this;
	}
	
	T& operator[](size_t index) const
	{
		if (index < 0 || index >= _size)
			throw std::exception();
		return _array[index];
	}
	
	size_t size() const { return _size; };

  private:
	T* _array;
	size_t _size;
};

