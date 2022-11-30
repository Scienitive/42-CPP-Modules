/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSources.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:33:27 by alyasar           #+#    #+#             */
/*   Updated: 2022/11/20 18:06:47 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCES_HPP
# define MATERIASOURCES_HPP

# include <string>
# include "Materias.hpp"

class AMateria;

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria *) = 0;
	virtual AMateria *createMateria(const std::string &) = 0;
};

class MateriaSource : public IMateriaSource
{
private:
	AMateria	*m_memory[4];

public:
	MateriaSource();
	MateriaSource(const MateriaSource &);
	~MateriaSource();
	MateriaSource &operator=(const MateriaSource &);

	void learnMateria(AMateria *);
	AMateria *createMateria(const std::string &);
};

#endif