/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 17:47:34 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/01 13:15:41 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string type) : _type(type) {}

const std::string Weapon::getType() { return (_type); }
void Weapon::setType(const std::string type) { _type = type; }

Weapon::~Weapon() {}