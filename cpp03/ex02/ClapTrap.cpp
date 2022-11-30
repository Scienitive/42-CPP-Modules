/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:42:35 by alyasar           #+#    #+#             */
/*   Updated: 2022/11/11 16:28:32 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	:	m_hp(10), m_ep(10), m_ad(0), m_name("Default")
{
	std::cout << "Default constructor called by " << m_name << " named ClapTrap." << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	:	m_hp(10), m_ep(10), m_ad(0), m_name(name)
{
	std::cout << "String constructor called by " << m_name << " named ClapTrap." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
	*this = claptrap;
	std::cout << "Copy constructor called by " << m_name << " named ClapTrap." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called by " << m_name << " named ClapTrap." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap)
{
	std::cout << "Copy assignment operator called by " << m_name << " named ClapTrap." << std::endl;
	m_name = claptrap.m_name;
	m_hp = claptrap.m_hp;
	m_ep = claptrap.m_ep;
	m_ad = claptrap.m_ad;
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	if (m_hp <= 0)
	{
		std::cout << "ClapTrap " << m_name << " can't attack because he has 0 HP left!" << std::endl;
		return;
	}

	if (m_ep > 0)
	{
		std::cout << "ClapTrap " << m_name << " attacks " << target << ", causing " << m_ad << " points of damage!" << std::endl;
		m_ep--;
	}
	else
	{
		std::cout << "ClapTrap " << m_name << " can't attack because he has 0 EP left!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > m_hp)
		m_hp = 0;
	else
		m_hp -= amount;
	std::cout << "ClapTrap " << m_name << " takes " << amount << " points of damage! Now he has " << m_hp << " HP!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (m_ep > 0)
	{
		std::cout << "ClapTrap " << m_name << " repairs himself " << amount << " HP!" << std::endl;
		m_hp += amount;
		m_ep--;
	}
	else
	{
		std::cout << "ClapTrap " << m_name << " can't be repaired because he has 0 EP left!" << std::endl;
	}
}