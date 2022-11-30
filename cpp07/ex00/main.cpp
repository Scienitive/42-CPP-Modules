/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 12:29:22 by alyasar           #+#    #+#             */
/*   Updated: 2022/11/24 11:17:33 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"

int main(void)
{
	int a = 2;
	int b = 3;

	::swap(a, b);
	std::cout << "a: " << a << "\nb: " << b << std::endl;
	std::cout << ::min(a, b) << std::endl;
	std::cout << ::max(a, b) << std::endl << std::endl;

	std::string c = "a";
	std::string d = "b";

	::swap(c, d);
	std::cout << "c: " << c << "\nd: " << d << std::endl;
	std::cout << ::min(c, d) << std::endl;
	std::cout << ::max(c, d) << std::endl;

	return (0);
}
