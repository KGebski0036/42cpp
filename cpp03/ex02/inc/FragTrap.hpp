/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 13:35:13 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/03 13:42:09 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "Colors.hpp"
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	~FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& original);
	FragTrap& operator=(const FragTrap& original);
	
	void highFivesGuys();
};

