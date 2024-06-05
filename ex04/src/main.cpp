/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:54:36 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/05 16:46:58 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"
#include <fstream>
#include <iostream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Missing arguments" << std::endl;
	}
	else
	{
		Replace replace(argv[1], argv[2], argv[3]);
		
		if (replace.read())
		{
			std::cout << "OK" << std::endl;
			replace.replace();
			replace.create();
		}
	}
	return (0);
}