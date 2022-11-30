/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 09:46:02 by alyasar           #+#    #+#             */
/*   Updated: 2022/11/22 16:08:05 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>
#include "Classes.hpp"

Base	*generate(void)
{
	int nmb = rand() % 3;

	if (nmb == 0)
		return (new A);
	else if (nmb == 1)
		return (new B);
	else if (nmb == 2)
		return (new C);
	return (nullptr);
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p) != nullptr)
		std::cout << "p: \"A\"" << std::endl;
	else if (dynamic_cast<B *>(p) != nullptr)
		std::cout << "p: \"B\"" << std::endl;
	else if (dynamic_cast<C *>(p) != nullptr)
		std::cout << "p: \"C\"" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		std::cout << "p: \"A\"" << std::endl;
	}
	catch(std::exception& e) {}
	try
	{
		B &b = dynamic_cast<B &>(p);
		std::cout << "p: \"B\"" << std::endl;
	}
	catch(std::exception& e) {}
	try
	{
		C &c = dynamic_cast<C &>(p);
		std::cout << "p: \"C\"" << std::endl;
	}
	catch(std::exception& e) {}
}

int main()
{
	srand(time(0));

	Base *derivedPTR = generate();
	Base &derivedREF = *derivedPTR;

	identify(derivedPTR);
	identify(derivedREF);

	delete derivedPTR;

	return (0);
}