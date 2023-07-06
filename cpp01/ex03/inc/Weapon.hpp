/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 17:47:04 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/01 13:15:49 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Weapon
{
  public:
	Weapon(const std::string);
	~Weapon();
	
	const std::string getType();
	void setType(const std::string type);

  private:
	std::string _type;
};
