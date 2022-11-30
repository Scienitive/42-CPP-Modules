/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:59:53 by alyasar           #+#    #+#             */
/*   Updated: 2022/11/11 17:08:20 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	m_hp = 100;
	m_ep = 100;
	m_ad = 30;
	m_name = "Default";
	std::cout << "Default constructor called by " << m_name << " named FragTrap." << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	m_hp = 100;
	m_ep = 100;
	m_ad = 30;
	m_name = name;
	std::cout << "String constructor called by " << m_name << " named FragTrap." << std::endl;
}

FragTrap::FragTrap(const FragTrap &Fragtrap)
{
	*this = Fragtrap;
	std::cout << "Copy constructor called by " << m_name << " named FragTrap." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor called by " << m_name << " named FragTrap." << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << m_name << " high fives everyone!" << std::endl;
}