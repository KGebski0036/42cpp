/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 16:02:03 by kgebski           #+#    #+#             */
/*   Updated: 2023/06/30 16:11:33 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

#include "Colors.hpp"

class Zombie
{
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	
	void announce();
	
private:
	std::string _name; 
};
