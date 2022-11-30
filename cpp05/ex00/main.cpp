/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:36:33 by alyasar           #+#    #+#             */
/*   Updated: 2022/11/21 20:00:27 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat *bob = new Bureaucrat("Bob", 2);

	std::cout << std::endl;

	try
	{
		std::cout << *bob << std::endl;
		bob->incrementGrade();
		std::cout << *bob << std::endl;
		bob->incrementGrade();
		std::cout << *bob << std::endl;
		bob->incrementGrade();
		std::cout << *bob << std::endl;
	} catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	delete bob;

	std::cout << std::endl;

	std::cout << std::endl;

	Bureaucrat *joe = new Bureaucrat("Joe", 145);

	std::cout << std::endl;

	try
	{
		std::cout << *joe << std::endl;
		joe->decrementGrade();
		std::cout << *joe << std::endl;
		joe->decrementGrade();
		std::cout << *joe << std::endl;
		joe->decrementGrade();
		std::cout << *joe << std::endl;
		joe->decrementGrade();
		std::cout << *joe << std::endl;
		joe->decrementGrade();
		std::cout << *joe << std::endl;
		joe->decrementGrade();
		std::cout << *joe << std::endl;
	} catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	delete joe;

	std::cout << std::endl;

	std::cout << std::endl;

	try
	{
		Bureaucrat trump("Trump", 151);
		std::cout << "SDASDSADSAD" << std::endl;
	} catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat trump("Trump", -1);
		std::cout << "SDASDSADSAD" << std::endl;
	} catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}