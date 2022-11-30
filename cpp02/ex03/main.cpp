/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 19:45:40 by alyasar           #+#    #+#             */
/*   Updated: 2022/10/28 16:34:53 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

int main()
{
    Point a(0.0f, 0.0f);
	Point b(5.0f, 3.0f);
	Point c(8.0f, 2.0f);
	Point p(4.0f, 2.0f);

	if (bsp(a, b, c, p))
		std::cout << "Inside" << std::endl;
	else
		std::cout << "Outside" << std::endl;

	return 0;
}