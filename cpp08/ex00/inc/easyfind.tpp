/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:42:40 by kgebski           #+#    #+#             */
/*   Updated: 2024/01/07 03:06:00 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include "Colors.hpp"

template <typename T>
void easyfind(T& container, int value)
{
	if (std::find(container.begin(), container.end(), value) != container.end() )
		std::cout << GREEN << "Found\n" << NC;
	else
		std::cout << RED << "Not found\n" << NC;
}
