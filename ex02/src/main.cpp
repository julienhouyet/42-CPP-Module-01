/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 11:25:48 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/05 11:35:28 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string brain;
	std::string* stringPTR = &brain;
	std::string& stringREF = brain;

	brain = "HI THIS IS BRAIN";
	
	std::cout << "Address :\n" << std::endl;
	std::cout << "brain : " << &brain << std::endl;
	std::cout << "stringPTR : " << stringPTR << std::endl;
	std::cout << "stringREF : " << &stringREF << std::endl;

	std::cout << "" << std::endl;
	
	std::cout << "Value :\n" << std::endl;
	std::cout << "brain : " << brain << std::endl;
	std::cout << "stringPTR : " << *stringPTR << std::endl;
	std::cout << "stringREF : " << stringREF << std::endl;
	return 0;
}