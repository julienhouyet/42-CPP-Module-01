/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 11:41:57 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/05 14:27:41 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	
}
Weapon::~Weapon()
{
	
}

void Weapon::setType(const std::string type)
{
	this->_type = type;
}

const std::string Weapon::getType() const
{
	return this->_type;
}