/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:04:15 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/04 17:19:14 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main()
{
	Zombie nicolas = Zombie("Nicolas");
	Zombie *lucas = newZombie("Lucas");
	randomChump("Victor");

	nicolas.announce();
	lucas->announce();

	delete lucas;

	return 0;
}