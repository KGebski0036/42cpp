/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 17:48:32 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/01 15:19:23 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Weapon.hpp"
#include "Colors.hpp"

class HumanB
{
  public:
	HumanB(const std::string name);
	~HumanB();
	
	void attack();
	
	void setWeapon(Weapon &weapon);
	Weapon getWeapon();
	
  private:
	std::string	_name;
	Weapon		*_weapon;
};
