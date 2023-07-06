/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 13:33:30 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/04 14:05:52 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << BLUE << "Brain is active\n" << NC;
}

Brain::Brain(const Brain& original)
{
	std::cout << BLUE << "Brain is active\n" << NC;
	for (size_t i = 0; i < original._ideas->length(); i++)
	{
		_ideas[i] = original._ideas[i];
	}
}

Brain& Brain::operator=(const Brain& original)
{
	for (size_t i = 0; i < original._ideas->length(); i++)
	{
		_ideas[i] = original._ideas[i];
	}
	return *this;
}

std::string* Brain::getIdeas() { return _ideas; }

Brain::~Brain() {
	std::cout << BLUE << "Brain is disactive\n" << NC;
}