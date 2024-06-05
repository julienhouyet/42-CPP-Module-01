/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 11:41:36 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/05 15:13:50 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __HUMAN_A_H__
#define __HUMAN_A_H__

#include <Weapon.hpp>
#include <iostream>

class HumanA
{
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();
		
		void setWeapon(const Weapon& weapon);

		void attack(void) const;
		
	private:
		std::string _name;
		Weapon& _weapon;
};

#endif