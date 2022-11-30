/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:09:36 by alyasar           #+#    #+#             */
/*   Updated: 2022/11/14 21:44:25 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animals.hpp"

int main()
{
	const Animal *animal = new Animal();
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();

	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound(); // will output the cat sound!
	dog->makeSound();
	animal->makeSound();

	delete animal;
	delete dog;
	delete cat;

	std::cout << std::endl;

	const WrongAnimal *wronganimal = new WrongAnimal();
	const WrongAnimal *wrongCat = new WrongCat();

	std::cout << wronganimal->getType() << std::endl;
	std::cout << wrongCat->getType() << std::endl;
	wrongCat->makeSound();
	wronganimal->makeSound();

	delete wronganimal;
	delete wrongCat;

	return (0);
}