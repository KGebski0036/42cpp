/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:28:13 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/03 12:44:06 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include "ClapTrap.hpp"
#include "Colors.hpp"

void summary(ClapTrap *c1, ClapTrap *c2);

int main()
{
	srand (time(NULL));
	ClapTrap att("Attacker");
	ClapTrap def("Defender");
	
	std::cout << "\n";

	while (def.getHitPoints() > 0 && att.getEnergyPoints() > 0 && def.getEnergyPoints() > 0)
	{
		system("clear");
		att.attack(def.getName());
		def.takeDamage(att.getAttackDamage());
		def.beRepaired(rand() % 5);
		summary(&att, &def);
		sleep(1);
	}
	
	return 0;
}

void summary(ClapTrap *c1, ClapTrap *c2)
{
	std::cout << GREEN <<"    __,_,                   "<< RED <<"    __,_,                   \n";
	std::cout << GREEN <<"   [_|_/                      "<< RED <<"   [_|_/                      \n";
	std::cout << GREEN <<"    //                        "<< RED <<"    //                        \n";
	std::cout << GREEN <<"  _//    __                   "<< RED <<"  _//    __                   \n";
	std::cout << GREEN <<" (_|)   |@@|                  "<< RED <<" (_|)   |@@|                  \n";
	std::cout << GREEN <<"  \\ \\__ \\--/ __               "<< RED <<"  \\ \\__ \\--/ __               \n";
	std::cout << GREEN <<"   \\o__|----|  |   __         "<< RED <<"   \\o__|----|  |   __         \n";
	std::cout << GREEN <<"       \\ }{ /\\ )_ / _\\        "<< RED <<"       \\ }{ /\\ )_ / _\\        \n";
	std::cout << GREEN <<"       /\\__/\\ \\__O (__        "<< RED <<"       /\\__/\\ \\__O (__        \n";
	std::cout << GREEN <<"      (--/\\--)    \\__/        "<< RED <<"      (--/\\--)    \\__/        \n";
	std::cout << GREEN <<"      _)(  )(_                "<< RED <<"      _)(  )(_                \n";
	std::cout << GREEN <<"     `---''---`               "<< RED <<"     `---''---`               \n";
	std::cout << GREEN <<"     " << c1->getName() <<"       "<< RED <<"                " << c2->getName() <<"       \n";
	std::cout << GREEN <<"     E: " << c1->getEnergyPoints() <<"       "<< RED <<"                     E: " << c2->getEnergyPoints() <<"       \n";
	std::cout << GREEN <<"     A: " << c1->getAttackDamage() <<"       "<< RED <<"                     A: " << c2->getAttackDamage() <<"       \n";
	std::cout << GREEN <<"     HP:" << c1->getHitPoints() <<"       "<< RED <<"                    HP:" << c2->getHitPoints() <<"       \n";
}