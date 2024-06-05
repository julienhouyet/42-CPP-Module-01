/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:54:43 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/05 15:57:28 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __REPLACE_H__
#define __REPLACE_H__

#include <iostream>
class Replace
{
	public:
		Replace(std::string filename, std::string s1, std::string s2);
		~Replace();

		bool read();

	private:
		std::string _filename;
		std::string _s1;
		std::string _s2;
		std::string _fileContent;
};

#endif