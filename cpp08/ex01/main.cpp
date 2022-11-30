/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 14:30:31 by alyasar           #+#    #+#             */
/*   Updated: 2022/11/24 13:19:11 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>

int main()
{
    Span sp(5);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;
    std::cout << "longestSpan: " << sp.longestSpan() << std::endl << std::endl;

    try
    {
        sp.addNumber(11);
    } catch (std::exception &e)
    {
        std::cout << e.what() << std::endl << std::endl;
    }

    try
    {
        Span sp2(5);
        sp2.addNumber(1);
        std::cout << "shortestSpan: " << sp2.shortestSpan() << std::endl;
    } catch (std::exception &e)
    {
        std::cout << e.what() << std::endl << std::endl;
    }

	std::list<int>	l;
	srand(time(0));
	for (int i = 0; i < 100; i++)
		l.push_back(rand() % 100000);

	Span sp3(l.size());

	sp3.addNumber(l.begin(), l.end());

	std::cout << "shortestSpan: " << sp3.shortestSpan() << std::endl;
    std::cout << "longestSpan: " << sp3.longestSpan() << std::endl;

    /*
    std::cout << std::endl;
    Span s4(10000);
    srand(time(NULL));
    for (int i = 0; i < 10000; i++) {
        s4.addNumber(rand());
    }
    std::cout << "shortestSpan: " << s4.shortestSpan() << std::endl;
    std::cout << "longestSpan: " << s4.longestSpan() << std::endl;
    */

   return (0);
}