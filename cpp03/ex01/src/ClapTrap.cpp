/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:05:36 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/03 13:10:30 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << GREEN << "Default constructor called\n" << NC;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout << GREEN << "Constructor created " << DARKBLUE << _name << "\n" << NC;
	_attack_damage = 4;
	_energy_points = 10;
	_hit_points = 10;
}

ClapTrap::ClapTrap(const ClapTrap& original)
{
	_attack_damage = original.getAttackDamage();
	_energy_points =  original.getEnergyPoints();
	_hit_points =  original.getHitPoints();
	_name = original.getName();
	std::cout << GREEN << "Copy constructor created " << DARKBLUE << _name << "\n" << NC;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& original)
{
	_attack_damage = original.getAttackDamage();
	_energy_points =  original.getEnergyPoints();
	_hit_points =  original.getHitPoints();
	_name = original.getName();
	std::cout << GREEN << "Asign operator created " << DARKBLUE << _name << "\n" << NC;
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (_energy_points < 1 || _hit_points < 1)
	{
		std::cout << BLUE << "ClapTrap " << DARKBLUE << _name << RED << "  I am too exhausted\n" << NC;
		return;
	}
	
	std::cout << BLUE << "ClapTrap " << DARKBLUE << _name << YELLOW << " ⚔attacks⚔ " << RED
	<< target << BLUE << ", causing " << RED << "-" <<_attack_damage << " pts of damage!\n" << NC;
	
	_energy_points--;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (_energy_points < 1 || _hit_points < 1)
		return;
	std::cout << BLUE << "ClapTrap " << DARKBLUE << _name << YELLOW << " 💔take damage💔 " 
	<< RED << "-" << amount << " pts of damage!\n" << NC;
	_hit_points -= amount;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy_points < 1 || _hit_points < 1)
	{
		std::cout << BLUE << "ClapTrap " << DARKBLUE << _name << RED << " I am too exhausted\n" << NC;
		return;
	}

	std::cout << BLUE << "ClapTrap " << DARKBLUE << _name << YELLOW << " 🔧repair himself🔧 " 
	<< RED << "+" << amount << " pts of hit points!\n" << NC;
	_hit_points += amount;
	_energy_points--;
}

int ClapTrap::getHitPoints() const { return _hit_points; }
int ClapTrap::getEnergyPoints() const { return _energy_points; }
int ClapTrap::getAttackDamage() const { return _attack_damage; }
std::string ClapTrap::getName() const { return _name; }

ClapTrap::~ClapTrap()
{
	std::cout << RED << "Destructor destroy " << DARKBLUE << _name << "\n" << NC;
}