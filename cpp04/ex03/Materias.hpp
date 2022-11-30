/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materias.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:50:14 by alyasar           #+#    #+#             */
/*   Updated: 2022/11/20 18:43:18 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIAS_HPP
# define MATERIAS_HPP

# include <string>
# include "Character.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string	m_type;

	AMateria();

public:
	AMateria(const std::string &);
	AMateria(const AMateria &);
	virtual ~AMateria();

	const std::string &getType(void) const;
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &);
};

class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice &);
	~Ice();
	Ice &operator=(const Ice &);

	AMateria *clone() const;
	void use(ICharacter &);
};

class Cure : public AMateria
{
public:
	Cure();
	Cure(const Cure &);
	~Cure();
	Cure &operator=(const Cure &);

	AMateria *clone() const;
	void use(ICharacter &);
};

#endif