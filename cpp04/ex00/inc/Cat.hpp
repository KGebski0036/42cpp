/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:33:04 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/04 12:55:28 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
  public:
	Cat();
	Cat(const Cat& original);
	~Cat();
	Cat& operator=(const Cat& original);
	
	void makeSound() const;
};
