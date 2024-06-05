/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 17:12:48 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/05 17:28:20 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __HARL_H_
#define __HARL_H_

#include <iostream>

class Harl
{
	public:
		Harl();
		~Harl();

		void complain(std::string level);
		
	private:
		std::string _level;

		void _debug(void);
		void _info(void);
		void _warning(void);
		void _error(void);
};

#endif;