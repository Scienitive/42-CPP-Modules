/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:10:16 by alyasar           #+#    #+#             */
/*   Updated: 2022/11/22 17:07:11 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &intern)
{
	*this = intern;
}

Intern::~Intern()
{
}

Intern &Intern::operator=(const Intern &intern)
{
	return (*this);
}

static AForm	*makeShrubbery(const std::string targetName)
{
	return (new ShrubberyCreationForm(targetName));
}

static AForm	*makeRobotomy(const std::string targetName)
{
	return (new RobotomyRequestForm(targetName));
}

static AForm	*makePresidential(const std::string targetName)
{
	return (new PresidentialPardonForm(targetName));
}

AForm	*Intern::makeform(std::string formName, std::string targetName)
{
	std::string	formNames[3] = 
	{
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	AForm		*(*formFuncs[3])(const std::string targetName) =
	{
		&makeShrubbery,
		&makeRobotomy,
		&makePresidential
	};

	for (int i = 0; i < 3; i++)
	{
		if (formName == formNames[i])
		{
			std::cout << "Intern creates " << formName << std::endl;
			return (formFuncs[i](targetName));
		}
	}

	std::cout << "Intern can't create" << formName << std::endl;
	return (nullptr);
}