/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:15:11 by alyasar           #+#    #+#             */
/*   Updated: 2022/11/15 14:12:17 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	checkGrade(int grade)
{
	if (grade < Bureaucrat::max_grade)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > Bureaucrat::min_grade)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat constructed." << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade)
	:	m_name(name), m_grade(grade)
{
	checkGrade(grade);
	std::cout << "Bureaucrat constructed." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat)
	:	m_name(bureaucrat.getName()), m_grade(bureaucrat.getGrade())
{
	std::cout << "Bureaucrat copy constructed." << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructed." << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
	std::cout << "Bureaucrat copy assignment operator executed." << std::endl;
	m_grade = bureaucrat.m_grade;
	return (*this);
}

const std::string Bureaucrat::getName(void) const
{
	return (m_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (m_grade);
}

void	Bureaucrat::incrementGrade(void)
{
	checkGrade(m_grade - 1);
	m_grade--;
	std::cout << "Bureaucret grade incremented." << std::endl;
}

void	Bureaucrat::decrementGrade(void)
{
	checkGrade(m_grade + 1);
	m_grade++;
	std::cout << "Bureaucret grade decremented." << std::endl;
}

void	Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
	}
	catch(Form::GradeTooLowException &e)
	{
		std::cout << this->getName() << " couldn't sign " << form.getName() << " named form because " << e.what() << std::endl;
	}
	
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Exception: Grade too high.");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Exception: Grade too low.");
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (os);
}