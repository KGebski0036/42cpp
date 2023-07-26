/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student42 <student42@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 12:40:39 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/13 17:23:43 by student42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <string>
#include <algorithm>
#include <iostream>
#include <vector>
#include <sstream>
#include <deque>

#include "Colors.hpp"

class PmergeMe
{
  public:
	PmergeMe();
	PmergeMe(const PmergeMe& original);
	PmergeMe& operator=(const PmergeMe& original);
	~PmergeMe();
	
	void readInput(int argc, char *argv[]);
	void printContainer();
	void sortVector();
	void sortDeque();
  private:
  
	void mergeInsertSortVector(int start, int end);
	void insertSortVector(int start, int end);
	void mergeVector(int start, int mid, int end);
	
	void mergeInsertSortDeque(int start, int end);
	void insertSortDeque(int start, int end);
	void mergeDeque(int start, int mid, int end);
	
	std::vector<int> _vec;
	std::deque<int> _deq;
};
