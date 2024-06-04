/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:05:05 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/04 17:29:38 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <iostream>

class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie();

		void announce(void);
		
	private:
		std::string _name;
};

Zombie *zombieHorde(int N, std::string name);

#endif