/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:36:33 by alyasar           #+#    #+#             */
/*   Updated: 2022/11/30 20:12:09 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat bureaucrat("Joe", 2);

	Intern  intern;
	AForm	*form;

	std::cout << std::endl;

	form = intern.makeform("robotomy request", "someone");
	bureaucrat.signForm(*form);
	bureaucrat.executeForm(*form);
	delete form;

	std::cout << std::endl;

	form = intern.makeform("shrubbery creation", "someone");
	bureaucrat.signForm(*form);
	bureaucrat.executeForm(*form);
	delete form;

	std::cout << std::endl;

	form = intern.makeform("presidential pardon", "someone");
	bureaucrat.signForm(*form);
	bureaucrat.executeForm(*form);
	delete form;

	std::cout << std::endl;

    return (0);
}