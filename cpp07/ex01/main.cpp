/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 12:42:08 by alyasar           #+#    #+#             */
/*   Updated: 2022/11/24 12:40:29 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
    int arr1[] = {1, 2, 3, 4, 5};

    iter(arr1, 5, &print);
	std::cout << std::endl;
	iter(arr1, 5, &incrementPrint);
	std::cout << std::endl;
	iter(arr1, 5, &decrementPrint);
	std::cout << std::endl;
	std::cout << std::endl;

    double arr2[] = {1.1, 2.2, 3.3, 4.4, 5.5};

    iter(arr2, 5, &print);
	std::cout << std::endl;
	iter(arr2, 5, &incrementPrint);
	std::cout << std::endl;
	iter(arr2, 5, &decrementPrint);
	std::cout << std::endl;
	std::cout << std::endl;

    char arr3[] = {'a', 'b', 'c', 'd', 'e'};

    iter(arr3, 5, &print);
	std::cout << std::endl;
	iter(arr3, 5, &incrementPrint);
	std::cout << std::endl;
	iter(arr3, 5, &decrementPrint);
	std::cout << std::endl;
	std::cout << std::endl;

    std::string arr4[] = {"one", "two", "three", "four", "five"};

    iter(arr4, 5, &print);
	std::cout << std::endl;

    return (0);
}