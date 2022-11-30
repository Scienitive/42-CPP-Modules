/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:59:53 by alyasar           #+#    #+#             */
/*   Updated: 2022/11/11 15:49:06 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	m_hp = 100;
	m_ep = 50;
	m_ad = 20;
	m_name = "Default";
	std::cout << "Default constructor called by " << m_name << " named ScavTrap." << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	m_hp = 100;
	m_ep = 50;
	m_ad = 20;
	m_name = name;
	std::cout << "String constructor called by " << m_name << " named ScavTrap." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap)
{
	*this = scavtrap;
	std::cout << "Copy constructor called by " << m_name << " named ScavTrap." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor called by " << m_name << " named ScavTrap." << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (m_hp <= 0)
	{
		std::cout << "ScavTrap " << m_name << " can't attack because he has 0 HP left!" << std::endl;
		return;
	}

	if (m_ep > 0)
	{
		std::cout << "ScavTrap " << m_name << " attacks " << target << ", causing " << m_ad << " points of damage!" << std::endl;
		m_ep--;
	}
	else
	{
		std::cout << "ScavTrap " << m_name << " can't attack because he has 0 EP left!" << std::endl;
	}
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << m_name << " is now in Gate Keeper mode!" << std::endl;
}