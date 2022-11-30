/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:42:42 by alyasar           #+#    #+#             */
/*   Updated: 2022/11/11 17:15:11 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap claptrap("Clyde");
	ScavTrap scavtrap("Scarlet");
	std::cout << std::endl;

	claptrap.attack("Someone");
	scavtrap.attack("Someone");
	std::cout << std::endl;

	scavtrap.guardGate();
	std::cout << std::endl;

	scavtrap.takeDamage(50);
	scavtrap.takeDamage(50);

	scavtrap.attack("Someone");
	scavtrap.beRepaired(20);
	scavtrap.attack("Someone");

	std::cout << std::endl;
	return (0);
}