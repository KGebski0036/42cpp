/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:28:13 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/04 15:06:47 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <iostream>
#include "IAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#define SIZE 10

int main()
{
	IAnimal *animals[SIZE];
	
	for(int i = 0; i < SIZE; i++)
	{
		if (i % 2 == 0)
			animals[i] =  new Cat();
		else
			animals[i] =  new Dog();
		std::cout << "\n";
		usleep(400000);
	}
	
	for(int i = 0; i < SIZE; i++)
	{
		delete animals[i];
		std::cout << "\n";
		usleep(400000);
	}
	
	Cat a;
	Cat b(a);
	
	(a.getBrain())->getIdeas()[0] = "Fish";
	(b.getBrain())->getIdeas()[0] = "Big Fish";
	
	std::cout << YELLOW << (a.getBrain())->getIdeas()[0] << "\n" << NC;
	std::cout << YELLOW << (b.getBrain())->getIdeas()[0] << "\n" << NC;
	
	// ! IAnimal a;

	return 0;
}