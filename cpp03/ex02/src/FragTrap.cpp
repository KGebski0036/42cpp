/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 13:35:09 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/03 13:43:12 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << GREEN << "Constructor created FragTrap " << DARKBLUE << _name << "\n" << NC;
	_name = name;
	_attack_damage = 20;
	_energy_points = 50;
	_hit_points = 100;
}

FragTrap::FragTrap(const FragTrap& original)
{
	_attack_damage = original.getAttackDamage();
	_energy_points =  original.getEnergyPoints();
	_hit_points =  original.getHitPoints();
	_name = original.getName();
	std::cout << GREEN << "Copy constructor created FragTrap " << DARKBLUE << _name << "\n" << NC;
}
FragTrap& FragTrap::operator=(const FragTrap& original)
{
	_attack_damage = original.getAttackDamage();
	_energy_points =  original.getEnergyPoints();
	_hit_points =  original.getHitPoints();
	_name = original.getName();
	std::cout << GREEN << "Asign operator created FragTrap " << DARKBLUE << _name << "\n" << NC;
	return *this;
}

void FragTrap::highFivesGuys()
{
	std::cout << YELLOW << "Give me a high Five ✋\n" << NC;
}

FragTrap::~FragTrap()
{
	std::cout << RED << "Destructor destroy FragTrap " << DARKBLUE << _name << "\n" << NC;
}