/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:36:33 by alyasar           #+#    #+#             */
/*   Updated: 2022/11/22 17:02:57 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	Bureaucrat *obama = new Bureaucrat("Obama", 130);
	Bureaucrat *trump = new Bureaucrat("Trump", 15);
	Form *form = new Form("form", 30, 10);

	std::cout << std::endl;

	std::cout << *form << std::endl;
	std::cout << std::endl;
	
	try
	{
		obama->signForm(*form);
	} catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		trump->signForm(*form);
	} catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << *form;

	std::cout << std::endl;
	std::cout << std::endl;

	delete obama;
	delete trump;
	delete form;

	return (0);
}