/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:04:15 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/04 19:51:23 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main()
{
    int N = 5;
    Zombie* horde = zombieHorde(N, "Charlie");

    if (horde)
    {
        for (int i = 0; i < N; ++i)
        {
            horde[i].announce();
        }
        delete[] horde;
    }
    else
    {
        std::cout << "Invalid number of zombies" << std::endl;
    }

    return 0;
}