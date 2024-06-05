/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:54:36 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/05 15:04:40 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::cout << "File : " << argv[1] << std::endl;
		std::cout << "Search : " << argv[2] << std::endl;
		std::cout << "Replace : " << argv[3] << std::endl;
	}
	else
	{
		std::cout << "Bad arguments" << std::endl;
	}
	return (0);
}