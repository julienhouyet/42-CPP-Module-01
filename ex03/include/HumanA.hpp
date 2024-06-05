/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 11:41:36 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/05 12:06:25 by jhouyet          ###   ########.fr       */
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
		HumanA(std::string _name, Weapon& _weapon);
		~HumanA();

		void attack(void);
		void setWeapon(const Weapon& _weapon);
		
	private:
		Weapon _weapon;
		std::string _name;
};

#endif