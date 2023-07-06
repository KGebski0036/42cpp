/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 15:01:23 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/04 15:05:21 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IAnimal.hpp"

std::string IAnimal::getType() const { return _type; }
void IAnimal::setType(std::string type) { _type = type; };

IAnimal::~IAnimal() 
{
	std::cout << RED << "Animal was destroyed\n" << NC;
};