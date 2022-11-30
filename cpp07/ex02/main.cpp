/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 13:45:38 by alyasar           #+#    #+#             */
/*   Updated: 2022/11/24 12:39:27 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
#include "Array.tpp"

#define VALUE 10

void a()
{
    srand(time(NULL));

    Array<int> myArray(VALUE);
    int *array = new int[VALUE];
    
    for (int i = 0; i < VALUE; i++)
    {
        int value = rand() % 100;
        myArray[i] = value;
        array[i] = value;
    }

    std::cout << "myArray: ";
    for (int i = 0; i < VALUE; i++)
    {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "array:   ";
    for (int i = 0; i < VALUE; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    Array<int> *tmp = new Array<int>(myArray);

    std::cout << "tmp:     ";
    for (int i = 0; i < VALUE; i++)
    {
        std::cout << (*tmp)[i] << " ";
    }

    delete tmp;
    std::cout << std::endl << std::endl;

    try
    {
        std::cout << myArray[0] << std::endl;
        myArray[0] = 100;
        std::cout << myArray[0] << std::endl;
        myArray[-1] = 100;
        std::cout << myArray[0] << std::endl;
    } catch (std::exception &e)
    {
        std::cout << e.what() << std::endl; 
    }

    try
    {
        myArray[VALUE] = 100;
        std::cout << myArray[VALUE] << std::endl;
    } catch (std::exception &e)
    {
        std::cout << e.what() << std::endl; 
    }

    delete[] array;
}

int main()
{
    a();
    return (0);
}