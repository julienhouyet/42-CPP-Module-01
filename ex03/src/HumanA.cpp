/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 11:41:50 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/05 14:20:08 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
	
}

HumanA::~HumanA()
{
	
}

void HumanA::attack(void) const
{
	std::cout << this->_name << " attack with " << this->_weapon.getType() << std::endl;
}

void HumanA::setWeapon(const Weapon& weapon)
{
	this->_weapon = weapon;
}