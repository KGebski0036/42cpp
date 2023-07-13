/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:28:13 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/09 16:01:45 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include "Colors.hpp"
#include "easyfind.tpp"

int main()
{	
	std::vector<int> vec(100, 1);
	std::list<int> lst(100, 2);
	
	vec.at(2) = 42;
	
	easyfind(vec, 42);
	easyfind(lst, 42);
	
	return (0);
}