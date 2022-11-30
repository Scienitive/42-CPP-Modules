/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:02:33 by alyasar           #+#    #+#             */
/*   Updated: 2022/10/25 13:36:20 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int	main()
{
	Zombie	zombie1("Joe Biden");
	zombie1.announce();

	Zombie	*zombie2 = newZombie("Obama");
	zombie2->announce();

	randomChump("Trump");

	delete zombie2;
}