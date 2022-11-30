/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:38:48 by alyasar           #+#    #+#             */
/*   Updated: 2022/10/25 15:09:41 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!" << std::endl << std::endl;
}

void	Harl::info(void)
{
	std::cout <<  "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void	Harl::error(void)
{
	std::cout <<  "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

void	Harl::complain(std::string level)
{
	int			lev = -1;
	std::string func_names[4] =
	{
		std::string("DEBUG"),
		std::string("INFO"),
		std::string("WARNING"),
		std::string("ERROR")
	};

	for (int i = 0; i < 4; i++)
	{
		if (level == func_names[i])
		{
			lev = i;
			break;
		}
	}

	switch (lev)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			debug();
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			info();
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			warning();
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;

	}
}
