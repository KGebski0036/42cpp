/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 16:12:47 by kgebski           #+#    #+#             */
/*   Updated: 2023/06/30 16:46:02 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main()
{
	int size_of_horde = 10;
	
	Zombie *horde = zombieHorde(size_of_horde, "Walaszek");
	
	for (int i = 0; i < size_of_horde; i++)
	{
		horde[i].announce();
		usleep(50000);
	}
	delete [] horde;
	return (0);
}
