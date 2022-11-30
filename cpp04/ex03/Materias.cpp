/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materias.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:38:52 by alyasar           #+#    #+#             */
/*   Updated: 2022/11/20 18:52:28 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Materias.hpp"

// AMATERIA //

AMateria::AMateria(const std::string &type)
	:	m_type(type)
{
}

AMateria::AMateria(const AMateria &amateria)
	:	m_type(amateria.m_type)
{
}

AMateria::~AMateria()
{
}

const std::string	&AMateria::getType(void) const
{
	return (m_type);
}

void	AMateria::use(ICharacter &target)
{
	std::cout << m_type << " used on " << target.getName() << std::endl;
}

// ICE //

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(const Ice &ice) : AMateria("ice")
{
	*this = ice;
}

Ice::~Ice()
{
}

Ice	&Ice::operator=(const Ice &ice)
{
	m_type = ice.m_type;
	return (*this);
}

AMateria	*Ice::clone() const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

// CURE //

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure &cure) : AMateria("cure")
{
	*this = cure;
}

Cure::~Cure()
{
}

Cure	&Cure::operator=(const Cure &cure)
{
	m_type = cure.m_type;
	return (*this);
}

AMateria	*Cure::clone() const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}