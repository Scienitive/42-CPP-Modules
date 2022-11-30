/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 01:03:12 by alyasar           #+#    #+#             */
/*   Updated: 2022/11/24 13:00:55 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <array>
#include <list>
#include "easyfind.hpp"

int main()
{
	std::vector<int> vec;
	for (int i = 0; i < 10; i++)
		vec.push_back(i * 10);

	std::cout << easyfind(vec, 20) << " ";
	std::cout << easyfind(vec, 50) << " ";
	std::cout << easyfind(vec, 150) << std::endl;

	std::array<int, 10> arr;
	for (int i = 0; i < 10; i++)
		arr[i] = i * 10;

	std::cout << easyfind(arr, 20) << " ";
	std::cout << easyfind(arr, 50) << " ";
	std::cout << easyfind(arr, 15) << std::endl;

	std::list<int> list;
	for (int i = 0; i < 10; i++)
		list.push_back(i * 10);

	std::cout << easyfind(list, 20) << " ";
	std::cout << easyfind(list, 50) << " ";
	std::cout << easyfind(list, 15) << std::endl;

	return (0);
}