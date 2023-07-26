/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student42 <student42@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 12:42:33 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/13 18:11:49 by student42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}
PmergeMe::PmergeMe(const PmergeMe& original) 
{
	_vec = original._vec;
	_deq = original._deq;
}
PmergeMe& PmergeMe::operator=(const PmergeMe& original)
{
	_vec = original._vec;
	_deq = original._deq;
	return (*this);
}

void PmergeMe::readInput(int argc, char *argv[])
{
	for (int i = 1; i < argc; ++i)
	{
		std::stringstream ss(argv[i]);
		
		int num = 0;
		
		if (!(ss >> num) || !ss.eof())
			throw std::exception();
		if (num < 0)
			throw std::exception();
		
		_vec.push_back(num);
		_deq.push_back(num);
	}
}

void PmergeMe::printContainer()
{
	for(size_t i = 0; i < _vec.size(); i++)
	{
		std::cout << BLUE << _vec[i] << " ";
		if (i % 15 == 14)
			std::cout << "\n";
			
		if (_vec[i] != _deq[i])
			throw std::exception();
	}
	std::cout << "\n" << NC;
}

void PmergeMe::sortVector()
{
	mergeInsertSortVector(0, _vec.size() - 1);
}

void PmergeMe::sortDeque()
{
	mergeInsertSortDeque(0, _deq.size() - 1);
}

void PmergeMe::mergeInsertSortVector(int start, int end)
{
	if (start < end)
	{
		if (end - start < 10)
		{
			insertSortVector(start, end);
		}
		else
		{
			int mid = start + (end - start) / 2;
			
			mergeInsertSortVector(start, mid);
			mergeInsertSortVector(mid + 1, end);
			
			mergeVector(start, mid, end);
		}
	}
}
void PmergeMe::insertSortVector(int start, int end)
{
	for (int i = start + 1; i <= end; ++i)
	{
		int key = _vec[i];
		int j = i - 1;
		
		for (; j >= start && _vec[j] > key; --j)
			_vec[j + 1] = _vec[j];
			
		_vec[j + 1] = key;
	}
}
void PmergeMe::mergeVector(int start, int mid, int end)
{
	int i, j, k;
	int n1 = mid - start + 1;
	int n2 = end - mid;

	std::vector<int> left(n1);
	std::vector<int> right(n2);

	for (i = 0; i < n1; ++i)
		left[i] = _vec[start + i];
	for (j = 0; j < n2; ++j)
		right[j] = _vec[mid + 1 + j];

	i = 0;
	j = 0;
	k = start;
	while (i < n1 && j < n2) {
		if (left[i] <= right[j])
			_vec[k++] = left[i++];
		else
			_vec[k++] = right[j++];
	}
	while (i < n1)
		_vec[k++] = left[i++];

	while (j < n2)
		_vec[k++] = right[j++];
}

void PmergeMe::mergeInsertSortDeque(int start, int end)
{
	if (start < end)
	{
		if (end - start < 10)
		{
			insertSortDeque(start, end);
		}
		else
		{
			int mid = start + (end - start) / 2;
			
			mergeInsertSortDeque(start, mid);
			mergeInsertSortDeque(mid + 1, end);
			
			mergeDeque(start, mid, end);
		}
	}
}
void PmergeMe::insertSortDeque(int start, int end)
{
	for (int i = start + 1; i <= end; ++i)
	{
		int key = _deq[i];
		int j = i - 1;
		
		for (; j >= start && _deq[j] > key; --j)
			_deq[j + 1] = _deq[j];
			
		_deq[j + 1] = key;
	}
}
void PmergeMe::mergeDeque(int start, int mid, int end)
{
	int i, j, k;
	int n1 = mid - start + 1;
	int n2 = end - mid;

	std::deque<int> left(n1);
	std::deque<int> right(n2);

	for (i = 0; i < n1; ++i)
		left[i] = _deq[start + i];
	for (j = 0; j < n2; ++j)
		right[j] = _deq[mid + 1 + j];

	i = 0;
	j = 0;
	k = start;
	while (i < n1 && j < n2) {
		if (left[i] <= right[j])
			_deq[k++] = left[i++];
		else
			_deq[k++] = right[j++];
	}
	while (i < n1)
		_deq[k++] = left[i++];

	while (j < n2)
		_deq[k++] = right[j++];
}
	
PmergeMe::~PmergeMe() {}
