/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:33:04 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/04 15:03:38 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IAnimal.hpp"
#include "Brain.hpp"

class Cat : public IAnimal
{
  public:
	Cat();
	Cat(const Cat& original);
	~Cat();
	Cat& operator=(const Cat& original);
	
	void makeSound() const;
	
	Brain* getBrain();

  private:
	Brain*		_brain;
};
