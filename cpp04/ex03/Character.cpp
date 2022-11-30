/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:00:10 by alyasar           #+#    #+#             */
/*   Updated: 2022/11/20 18:54:35 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character(const std::string &name)
	:	m_name(name)
{
	for (int i = 0; i < 4; i++)
		m_inventory[i] = nullptr;
}

Character::Character(const Character &character)
	:	m_name(character.m_name)
{
	*this = character;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (m_inventory[i] != nullptr)
			delete m_inventory[i];
	}
}

Character	&Character::operator=(const Character &character)
{
	for (int i = 0; i < 4; i++)
	{
		if (m_inventory[i] != nullptr)
			delete m_inventory[i];
		m_inventory[i] = character.m_inventory[i];
	}
	return (*this);
}

const std::string	&Character::getName() const
{
	return (m_name);
}

void	Character::equip(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (m_inventory[i] == nullptr)
		{
			m_inventory[i] = materia;
			break;
		}
	}
}

void	Character::unequip(int slot)
{
	if (m_inventory[slot] != nullptr)
	{
		delete m_inventory[slot];
		m_inventory[slot] = nullptr;
	}
}

void	Character::use(int slot, ICharacter &target)
{
	if (m_inventory[slot] != nullptr)
	{
		m_inventory[slot]->use(target);
	}
}