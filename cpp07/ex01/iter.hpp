/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 12:33:10 by alyasar           #+#    #+#             */
/*   Updated: 2022/11/24 11:38:19 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void	iter(T *address, size_t length, void (*func)(const T &))
{
	for (size_t i = 0; i < length; i++)
		func(address[i]);
}

template <typename T>
void    print(const T &i)
{
    std::cout << i << " ";
}

template <typename T>
void    incrementPrint(const T &i)
{
    std::cout << ++(const_cast<T &>(i)) << " ";
}

template <typename T>
void    decrementPrint(const T &i)
{
    std::cout << ++(const_cast<T &>(i)) << " ";
}

#endif