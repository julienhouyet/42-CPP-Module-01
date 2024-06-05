/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 11:41:40 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/05 14:41:28 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __HUMAN_B_H__
#define __HUMAN_B_H__

#include <Weapon.hpp>
#include <iostream>

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB();

		void setWeapon(Weapon& weapon);
		
		void attack(void) const;
		
	private:
		std::string _name;
		Weapon* _weapon;
};

#endif