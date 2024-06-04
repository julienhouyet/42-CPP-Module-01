/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 17:28:27 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/04 19:47:33 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0)
	{
		return nullptr;
	}

	Zombie* horde = new Zombie[N];
	
	for (int i = 0; i < N; ++i)
	{
		horde[i].setName(name);
	}

	return horde;
}