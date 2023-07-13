/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 12:47:56 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/03 13:12:19 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "Colors.hpp"
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
  public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& original);
	~ScavTrap();
	ScavTrap& operator=(const ScavTrap& original);
	
	void attack(const std::string& target);
	void guardGate();
};

