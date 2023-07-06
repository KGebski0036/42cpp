/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 17:49:09 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/01 13:18:34 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {}

void HumanA::attack()
{

	std::cout << DARKBLUE << _name << BLUE << " attacks with their "
			<< YELLOW << _weapon.getType() << NC << "\n";
}

void HumanA::setWeapon(Weapon weapon) { _weapon = weapon; }
Weapon HumanA::getWeapon() { return _weapon; }

HumanA::~HumanA() {}
