/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:54:39 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/05 16:09:22 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"
#include <fstream>
#include <iostream>
#include <sstream>

Replace::Replace(std::string filename, std::string s1, std::string s2) : _filename(filename), _s1(s1), _s2(s2)
{
	
}

Replace::~Replace()
{
	
}

bool Replace::read()
{
	std::ifstream file(this->_filename);

    if (!file.is_open()) {
        std::cerr << "Failed to open file: " << this->_filename << std::endl;
        return (0);
    }

    std::stringstream buffer;
    buffer << file.rdbuf();
    this->_fileContent = buffer.str();

    file.close();

	return (1);
}