/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:28:13 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/04 13:17:46 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* meta = new Animal();
	std::cout << "\n";
	const Animal* dog = new Dog();
	std::cout << "\n";
	const Animal* cat = new Cat();
	std::cout << "\n";
	
	std::cout << YELLOW << dog->getType() << " " << std::endl;
	std::cout << YELLOW << cat->getType() << " " << std::endl;
	std::cout << "\n";
	
	cat->makeSound();
	dog->makeSound();
	meta->makeSound();
	std::cout << "\n";
	
	delete meta;
	std::cout << "\n";
	
	meta = dog;
	meta->makeSound();
	std::cout << "\n";
	
	delete dog;
	std::cout << "\n";
	delete cat;
	std::cout << "\n";
	
	std::cout<< RED << "------- { Wrong implementation } -------\n" << NC; 
	
	const WrongAnimal* wrong_meta = new WrongAnimal();
	std::cout << "\n";
	const WrongAnimal* wrong_cat = new WrongCat();
	std::cout << "\n";
	
	std::cout << YELLOW << wrong_cat->getType() << " " << std::endl;
	std::cout << "\n";
	
	wrong_cat->makeSound();
	wrong_meta->makeSound();
	std::cout << "\n";
	
	delete wrong_meta;
	std::cout << "\n";
	
	// wrong_meta = wrong_cat;
	// meta->makeSound();
	// std::cout << "\n";
	
	delete wrong_cat;
	std::cout << "\n";
	
	return 0;
}