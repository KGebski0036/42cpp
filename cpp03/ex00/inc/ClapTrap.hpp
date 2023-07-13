/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:05:13 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/03 12:11:14 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "Colors.hpp"

class ClapTrap
{
  public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& original);
	~ClapTrap();
	ClapTrap& operator=(const ClapTrap& original);
	
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	int getHitPoints() const;
	int getEnergyPoints() const;
	int getAttackDamage() const;
	std::string getName() const;
	
  private:
	std::string _name;
	
	int _hit_points;
	int _energy_points;
	int _attack_damage; 
};
