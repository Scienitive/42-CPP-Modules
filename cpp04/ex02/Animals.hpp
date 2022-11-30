/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animals.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 00:40:41 by alyasar           #+#    #+#             */
/*   Updated: 2022/11/15 00:04:10 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMALS_HPP
# define ANIMALS_HPP

#include <string>

class Brain
{
private:
	std::string	m_ideas[100];

public:
	Brain();
	Brain(const Brain &);
	~Brain();
	Brain &operator=(const Brain &);
};

class AAnimal
{
protected:
	std::string	m_type;

public:
	AAnimal();
	AAnimal(const AAnimal &);
	virtual	~AAnimal();
	AAnimal &operator=(const AAnimal &);

	virtual void	makeSound(void) const = 0;
	std::string		getType(void) const;
};

class Cat : public AAnimal
{
private:
	Brain	*m_brain;

public:
	Cat();
	Cat(const Cat &);
	~Cat();
	Cat &operator=(const Cat &);

	void	makeSound(void) const;
};

class Dog : public AAnimal
{
private:
	Brain	*m_brain;

public:
	Dog();
	Dog(const Dog &);
	~Dog();
	Dog &operator=(const Dog &);

	void	makeSound(void) const;
};

class WrongAnimal
{
protected:
	std::string	m_type;

public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &);
	~WrongAnimal();
	WrongAnimal &operator=(const WrongAnimal &);

	void			makeSound(void) const;
	std::string		getType(void) const;
};

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat &);
	~WrongCat();
	WrongCat &operator=(const WrongCat &);

	void	makeSound(void) const;
};

#endif