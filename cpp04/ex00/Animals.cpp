/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animals.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:38:19 by alyasar           #+#    #+#             */
/*   Updated: 2022/11/14 21:36:40 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animals.hpp"

// ANIMAL //

Animal::Animal()
{
	std::cout << "Animal is constructed." << std::endl;
	m_type = "Unknown";
}

Animal::Animal(const Animal &animal)
{
	std::cout << "Animal is copy constructed." << std::endl;
	*this = animal;
}

Animal::~Animal()
{
	std::cout << "Animal is destructed." << std::endl;
}

Animal &Animal::operator=(const Animal &animal)
{
	std::cout << "Animal copy assignment operator is executed." << std::endl;
	m_type = animal.m_type;
	return (*this);
}

void Animal::makeSound(void) const
{
	std::cout << "### Animal voices ###" << std::endl;
}

std::string Animal::getType(void) const
{
	return (m_type);
}

// CAT //

Cat::Cat()
{
	std::cout << "Cat is constructed." << std::endl;
	m_type = "Cat";
}

Cat::Cat(const Cat &cat)
{
	std::cout << "Cat is copy constructed." << std::endl;
	*this = cat;
}

Cat::~Cat()
{
	std::cout << "Cat is destructed." << std::endl;
}

Cat &Cat::operator=(const Cat &cat)
{
	std::cout << "Cat copy assignment operator is executed." << std::endl;
	m_type = cat.m_type;
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "### Cat voices ###" << std::endl;
}

// DOG //

Dog::Dog()
{
	std::cout << "Dog is constructed." << std::endl;
	m_type = "Dog";
}

Dog::Dog(const Dog &dog)
{
	std::cout << "Dog is copy constructed." << std::endl;
	*this = dog;
}

Dog::~Dog()
{
	std::cout << "Dog is destructed." << std::endl;
}

Dog &Dog::operator=(const Dog &dog)
{
	std::cout << "Dog copy assignment operator is executed." << std::endl;
	m_type = dog.m_type;
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "### Dog voices ###" << std::endl;
}

// WRONGANIMAL //

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal is constructed." << std::endl;
	m_type = "Unknown (WrongAnimal)";
}

WrongAnimal::WrongAnimal(const WrongAnimal &wronganimal)
{
	std::cout << "WrongAnimal is copy constructed." << std::endl;
	*this = wronganimal;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal is destructed." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wronganimal)
{
	std::cout << "WrongAnimal copy assignment operator is executed." << std::endl;
	m_type = wronganimal.m_type;
	return (*this);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "### WrongAnimal voices ###" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (m_type);
}

// WRONGCAT //

WrongCat::WrongCat()
{
	std::cout << "WrongCat is constructed." << std::endl;
	m_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &wrongcat)
{
	std::cout << "WrongCat is copy constructed." << std::endl;
	*this = wrongcat;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat is destructed." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &wrongcat)
{
	std::cout << "WrongCat copy assignment operator is executed." << std::endl;
	m_type = wrongcat.m_type;
	return (*this);
}

void WrongCat::makeSound(void) const
{
	std::cout << "### WrongCat voices ###" << std::endl;
}