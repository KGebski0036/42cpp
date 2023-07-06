/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 13:31:26 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/04 14:05:45 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "Colors.hpp"

class Brain
{
  public:
	Brain();
	Brain(const Brain& original);
	~Brain();
	Brain& operator=(const Brain& original);
	
	std::string* getIdeas();

  private:
	std::string _ideas[100];
};

