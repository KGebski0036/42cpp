/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 16:02:36 by kgebski           #+#    #+#             */
/*   Updated: 2023/06/30 16:44:16 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string name) : _name(name) {}

void Zombie::announce()
{
	std::cout << DARKBLUE << _name << BLUE << ": BraiiiiiiinnnzzzZ...\n" << NC; 
}

Zombie::~Zombie() {
	std::cout << RED << "Zombi: " << DARKBLUE << _name << RED " die\n" << NC;
	usleep(50000);
}
