/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:23:42 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/04 13:08:34 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Colors.hpp"

class WrongAnimal
{
  public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& original);
	~WrongAnimal();
	WrongAnimal& operator=(const WrongAnimal& original);
	
	std::string getType() const;
	void		setType(std::string type);
	
	void makeSound() const;
  protected:
	std::string _type;
};
