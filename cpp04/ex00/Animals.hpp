/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animals.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 00:40:41 by alyasar           #+#    #+#             */
/*   Updated: 2022/11/14 20:21:43 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMALS_HPP
# define ANIMALS_HPP

#include <string>

class Animal
{
protected:
	std::string	m_type;

public:
	Animal();
	Animal(const Animal &);
	virtual	~Animal();
	Animal &operator=(const Animal &);

	virtual void	makeSound(void) const;
	std::string		getType(void) const;
};

class Cat : public Animal
{
public:
	Cat();
	Cat(const Cat &);
	~Cat();
	Cat &operator=(const Cat &);

	void	makeSound(void) const;
};

class Dog : public Animal
{
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