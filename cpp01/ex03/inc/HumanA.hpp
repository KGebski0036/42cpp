/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 17:48:32 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/01 13:17:15 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include "Weapon.hpp"
#include "Colors.hpp"

class HumanA
{
  public:
	HumanA(const std::string name, Weapon &weapon);
	~HumanA();
	
	void attack();
	
	void setWeapon(Weapon weapon);
	Weapon getWeapon();

  private:
	std::string	_name;
	Weapon		&_weapon;
};
