/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:42:40 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/09 18:27:29 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Colors.hpp"

template<typename T>
void easyfind(T& container, int value)
{
	if (std::find(container.begin(), container.end(), value) != container.end() )
		std::cout << GREEN << "Found\n" << NC;
	else
		std::cout << RED << "Not found\n" << NC;
}