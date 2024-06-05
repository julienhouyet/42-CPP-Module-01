/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:54:39 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/05 16:46:40 by jhouyet          ###   ########.fr       */
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

void Replace::replace()
{
	std::string newContent;
    size_t pos = 0;
    size_t found_pos;

    while ((found_pos = _fileContent.find(_s1, pos)) != std::string::npos)
    {
        newContent.append(_fileContent, pos, found_pos - pos);
        newContent.append(_s2);
        pos = found_pos + _s1.length();
    }
    newContent.append(_fileContent, pos, _fileContent.length() - pos);

    _fileContent = newContent;
}

void Replace::create()
{
	std::ofstream file (this->_filename + ".replace");

	file << this->_fileContent;

	file.close();
}