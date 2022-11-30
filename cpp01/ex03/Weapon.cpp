/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:54:37 by alyasar           #+#    #+#             */
/*   Updated: 2022/10/25 13:53:39 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string type)
	:	m_type(type)
{
}

const std::string	&Weapon::getType()
{
	return ((std::string &)m_type);
}

void	Weapon::setType(std::string type)
{
	this->m_type = type;
}