/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:28:13 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/10 15:36:49 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Colors.hpp"
#include "MutantStack.hpp"

int main()
{	
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	
	std::cout << "Top: " << DARKBLUE << mstack.top() << std::endl << NC;
	
	mstack.pop();
	
	std::cout << "Top after pop: " << DARKBLUE << mstack.top() << std::endl << NC;
	
	std::cout << "Size: " << GREEN << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	
	while (it != ite)
	{
		std::cout << YELLOW << *it << " ";
		++it;
	}
	std::cout << "\n" << NC;
	
	// * You could uncomment this to see new C++ :)
	// for (auto el : mstack)
	// {
	// 	std::cout << MAGENTA << el << " ";
	// }
	// std::cout << "\n";

	// ! the foreach will not work with normal stack
	// std::stack<int> s(mstack);
	// for (auto el : s)
	// {
	// 	std::cout << RED << el << " ";
	// }
	
	MutantStack<int> mstack2(mstack);
	mstack.push(999);
	
	MutantStack<int>::iterator el = mstack2.begin();
	while (el != mstack2.end())
	{
		std::cout << YELLOW << *el << " ";
		++el;
	}
	std::cout << "\n" << NC;

	return (0);
}