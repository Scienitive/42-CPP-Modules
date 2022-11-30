/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 00:46:33 by alyasar           #+#    #+#             */
/*   Updated: 2022/11/11 17:13:11 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#include <iostream>

int	main(void)
{
	ClapTrap claptrap("Clyde");
	ScavTrap scavtrap("Scarlet");
	FragTrap fragtrap("Scarlet");
	std::cout << std::endl;

	fragtrap.attack("Someone");
	claptrap.attack("Someone");
	scavtrap.attack("Someone");
	std::cout << std::endl;

	fragtrap.highFivesGuys();
	std::cout << std::endl;

	fragtrap.takeDamage(50);
	fragtrap.takeDamage(50);

	fragtrap.attack("Someone");
	fragtrap.beRepaired(20);
	fragtrap.attack("Someone");

	std::cout << std::endl;
	return (0);
}