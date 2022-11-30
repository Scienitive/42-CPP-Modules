/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:02:33 by alyasar           #+#    #+#             */
/*   Updated: 2022/10/25 15:04:29 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int	main()
{
	int	N = 10;
	Zombie	*Horde = zombieHorde(N, "Sorb");

	if (Horde == NULL)
		return (1);
	for (int i = 0; i < N; i++)
		Horde[i].announce();
	delete[] Horde;
}