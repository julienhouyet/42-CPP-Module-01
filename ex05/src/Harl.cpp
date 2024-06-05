/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 17:12:50 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/05 18:58:44 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl()
{
	_ftab[0] = &Harl::_debug;
	_ftab[1] = &Harl::_info;
	_ftab[2] = &Harl::_warning;
	_ftab[3] = &Harl::_error;
}

Harl::~Harl()
{
	
}

void Harl::complain(std::string level)
{
	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };

	for (int i = 0; i < 4; ++i)
	{
		if (levels[i] == level)
		{
			(this->*_ftab[i])();
			return ;
		}
	}
	std::cerr << "Unknown complaint level" << std::endl;
}

void Harl::_debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void Harl::_info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't putenough bacon in my burger ! If you did, I wouldn't be asking for more !" << std::endl;
}

void Harl::_warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::_error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}