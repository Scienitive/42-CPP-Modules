/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:59:43 by alyasar           #+#    #+#             */
/*   Updated: 2022/07/06 19:21:57 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon)
	:	m_name(name), m_weapon(weapon)
{
}

void	HumanA::attack(void)
{
	std::cout << m_name << " attacks with their " << m_weapon.getType() << std::endl;
}