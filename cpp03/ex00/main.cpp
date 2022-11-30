/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:42:53 by alyasar           #+#    #+#             */
/*   Updated: 2022/11/11 17:18:53 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	claptrap("Clyde");
	ClapTrap	claptrap2("Scarlet");
	std::cout << std::endl;

	claptrap.attack("Someone");
	claptrap2.attack("Someone");
	std::cout << std::endl;

	claptrap2.takeDamage(100);
	claptrap2.attack("Someone");
	std::cout << std::endl;

	claptrap.attack("Someone");
	claptrap.attack("Someone");
	claptrap.attack("Someone");
	claptrap.attack("Someone");
	claptrap.attack("Someone");
	claptrap.attack("Someone");
	claptrap.attack("Someone");
	claptrap.attack("Someone");
	claptrap.attack("Someone");
	claptrap.attack("Someone");
	std::cout << std::endl;

	claptrap2.beRepaired(10);
	claptrap2.attack("Someone");

	std::cout << std::endl;
	return (0);
}