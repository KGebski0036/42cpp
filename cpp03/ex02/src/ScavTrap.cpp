/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 12:47:49 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/03 13:32:58 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << GREEN << "Constructor created ScavTrap " << DARKBLUE << _name << "\n" << NC;
	_name = name;
	_attack_damage = 20;
	_energy_points = 50;
	_hit_points = 100;
}

ScavTrap::ScavTrap(const ScavTrap& original)
{
	_attack_damage = original.getAttackDamage();
	_energy_points =  original.getEnergyPoints();
	_hit_points =  original.getHitPoints();
	_name = original.getName();
	std::cout << GREEN << "Copy constructor created ScavTrap " << DARKBLUE << _name << "\n" << NC;
}
ScavTrap& ScavTrap::operator=(const ScavTrap& original)
{
	_attack_damage = original.getAttackDamage();
	_energy_points =  original.getEnergyPoints();
	_hit_points =  original.getHitPoints();
	_name = original.getName();
	std::cout << GREEN << "Asign operator created ScavTrap " << DARKBLUE << _name << "\n" << NC;
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	if (_energy_points < 1 || _hit_points < 1)
	{
		std::cout << BLUE << "ScavTrap " << DARKBLUE << _name << RED << "  I am too exhausted\n" << NC;
		return;
	}
	
	std::cout << BLUE << "ScavTrap " << DARKBLUE << _name << YELLOW << " ⚔attacks⚔ " << RED
	<< target << BLUE << ", causing " << RED << "-" <<_attack_damage << " pts of damage!\n" << NC;
	
	_energy_points--;
}

void ScavTrap::guardGate()
{
	std::cout << YELLOW << "ScavTrap is now in Gate keeper mode.\n" << NC;
}

ScavTrap::~ScavTrap()
{
	std::cout << RED << "Destructor destroy ScavTrap " << DARKBLUE << _name << "\n" << NC;
}
