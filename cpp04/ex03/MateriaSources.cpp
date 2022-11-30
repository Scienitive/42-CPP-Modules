/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSources.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:30:14 by alyasar           #+#    #+#             */
/*   Updated: 2022/11/20 19:25:20 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSources.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		m_memory[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource &materiasource)
{
	*this = materiasource;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (m_memory[i] != nullptr)
			delete m_memory[i];
	}
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &materiasource)
{
	for (int i = 0; i < 4; i++)
		m_memory[i] = materiasource.m_memory[i];
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (m_memory[i] == nullptr)
		{
			m_memory[i] = materia;
			break;
		}
	}
}

AMateria	*MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (m_memory[i] != nullptr && m_memory[i]->getType() == type)
			return (m_memory[i]->clone());
	}

	return (0);
}