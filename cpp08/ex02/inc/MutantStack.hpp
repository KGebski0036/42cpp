/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 15:10:36 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/10 15:38:50 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{
  public:
	MutantStack() {}
	~MutantStack() {}
	MutantStack(const MutantStack& original)
	{
		*this = original;
	}
	MutantStack& operator=(const MutantStack& original)
	{
		std::stack<T>::operator=(original);
		return *this;
	}
	
	typedef typename std::deque<T>::iterator iterator;
	
	iterator begin() { return this->c.begin(); }
	iterator end() { return this->c.end(); }
};