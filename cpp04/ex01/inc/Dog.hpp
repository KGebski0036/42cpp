/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:33:04 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/04 13:53:00 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
  public:
	Dog();
	Dog(const Dog& original);
	~Dog();
	Dog& operator=(const Dog& original);
	
	void makeSound() const;
  private:
	Brain*		_brain;
};
