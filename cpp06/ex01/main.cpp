/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 07:49:56 by alyasar           #+#    #+#             */
/*   Updated: 2022/11/23 16:40:41 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
	int		x;
	int		y;
	char	c;
	bool	b;
};

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data		*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main()
{
	Data *data = new Data;

	data->x = 5;
	data->y = -10;
	data->c = 'a';
	data->b = true;

	std::cout << deserialize(serialize(data))->x <<std::endl;
	std::cout << deserialize(serialize(data))->y <<std::endl;
	std::cout << deserialize(serialize(data))->c <<std::endl;
	std::cout << deserialize(serialize(data))->b <<std::endl;

	delete data;

	/*
	int *a = new int(5);
	int* b = reinterpret_cast<int*>(a);
	int* c = reinterpret_cast<int*>(b);

	std::cout << *a << "\n" << *b << "\n" << *c << std::endl;

	delete a;
	*/

	return (0);
}