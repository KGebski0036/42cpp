/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 16:12:47 by kgebski           #+#    #+#             */
/*   Updated: 2023/06/30 16:24:11 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main()
{
	Zombie *zombie = newZombie("Ronald");
	zombie->announce();
	zombie->announce();

	randomChump("Walaszek");
	randomChump("Torpeda");
	
	delete (zombie);
	return (0);
}
