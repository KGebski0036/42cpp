/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:23:42 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/04 15:04:44 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Colors.hpp"

class IAnimal
{
  public:
	virtual ~IAnimal();
	virtual std::string getType() const;
	virtual void setType(std::string type);
	
	virtual void makeSound() const = 0;
  protected:
	std::string _type;
};
