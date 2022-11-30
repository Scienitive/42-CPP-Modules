/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:09:36 by alyasar           #+#    #+#             */
/*   Updated: 2022/11/21 14:27:09 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animals.hpp"

int main( void )
{
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();

	delete dog;
	delete cat;

	const Dog *dog2 = new Dog();
	const Dog *dog3 = new Dog(*dog2);

	delete dog2;
	delete dog3;

    const Animal *animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};

    for (int i = 0; i < 4; i++)
        delete animals[i];

    return (0);
}