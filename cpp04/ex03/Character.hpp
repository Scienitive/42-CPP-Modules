/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 16:05:19 by alyasar           #+#    #+#             */
/*   Updated: 2022/11/20 18:16:19 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include "Materias.hpp"

class AMateria;

class ICharacter
{
public:
	virtual ~ICharacter() {}
	virtual const std::string &getName() const = 0;
	virtual void equip(AMateria *) = 0;
	virtual void unequip(int) = 0;
	virtual void use(int, ICharacter &) = 0;
};

class Character : public ICharacter
{
private:
	std::string		m_name;
	AMateria		*m_inventory[4];

	Character();

public:
	Character(const std::string &);
	Character(const Character &);
	~Character();
	Character &operator=(const Character &);

	const std::string &getName() const;
	void equip(AMateria *);
	void unequip(int);
	void use(int, ICharacter &);
};

#endif