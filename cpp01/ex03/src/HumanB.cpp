/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 17:49:09 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/01 15:19:04 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string name) : _name(name), _weapon(NULL) {}

void HumanB::attack()
{
	if (_weapon != NULL)
	{
		std::cout << DARKBLUE << _name << BLUE << " attacks with their "
			<< YELLOW << _weapon->getType() << NC << "\n";
	}
	else
		std::cout << DARKBLUE << _name << RED << " is not armed" << NC << "\n";
}

void HumanB::setWeapon(Weapon &weapon) { _weapon = &weapon; }
Weapon HumanB::getWeapon() { return *_weapon; }

HumanB::~HumanB() {}

