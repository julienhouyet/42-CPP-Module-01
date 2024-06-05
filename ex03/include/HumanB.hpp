/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 11:41:40 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/05 12:06:23 by jhouyet          ###   ########.fr       */
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
		HumanB(std::string _name);
		~HumanB();

		void attack(void);
		void setWeapon(const Weapon& _weapon);
		
	private:
		Weapon _weapon;
		std::string _name;
};

#endif