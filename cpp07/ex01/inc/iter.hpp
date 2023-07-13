/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:42:40 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/09 15:19:37 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstddef>

template<typename T>
void iter(T* addr, size_t size, void (*f)(T&))
{
	for (size_t i = 0; i < size; i++)
		f(addr[i]);
}