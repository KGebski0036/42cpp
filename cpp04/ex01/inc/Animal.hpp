/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:23:42 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/04 13:52:44 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Colors.hpp"

class Animal
{
  public:
	Animal();
	Animal(const Animal& original);
	virtual ~Animal();
	Animal& operator=(const Animal& original);
	
	std::string getType() const;
	void		setType(std::string type);
	
	virtual void makeSound() const;
  protected:
	std::string _type;
};
