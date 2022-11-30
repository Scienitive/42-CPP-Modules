/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:33:25 by alyasar           #+#    #+#             */
/*   Updated: 2022/11/15 14:35:10 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

void	checkGrades(int signGrade, int execGrade)
{
	if (signGrade < Bureaucrat::max_grade)
		throw Form::GradeTooHighException();
	else if (signGrade > Bureaucrat::min_grade)
		throw Form::GradeTooLowException();
	if (execGrade < Bureaucrat::max_grade)
		throw Form::GradeTooHighException();
	else if (execGrade > Bureaucrat::min_grade)
		throw Form::GradeTooLowException();
}

Form::Form()
	:	m_name("Form"), m_reqSignGrade(150), m_reqExecGrade(150), m_signed(false)
{
	std::cout << "Form constructed." << std::endl;
}

Form::Form(const std::string name, const int reqSignGrade, const int reqExecGrade)
	:	m_name(name), m_reqSignGrade(reqSignGrade), m_reqExecGrade(reqExecGrade), m_signed(false)
{
	checkGrades(reqSignGrade, reqExecGrade);
	std::cout << "Form constructed." << std::endl;
}

Form::Form(const Form &form)
	:	m_name(form.getName()), m_reqSignGrade(form.getReqSignGrade()), m_reqExecGrade(form.getReqExecGrade()), m_signed(form.getSignedStatus())
{
	std::cout << "Form copy constructed." << std::endl;
}

Form::~Form()
{
	std::cout << "Form destructed." << std::endl;
}

Form &Form::operator=(const Form &form)
{
	std::cout << "Bureaucrat copy assignment operator executed." << std::endl;
	m_signed = form.getSignedStatus();
	return (*this);
}

const std::string Form::getName(void) const
{
	return (m_name);
}

bool Form::getSignedStatus(void) const
{
	return (m_signed);
}

const int Form::getReqSignGrade(void) const
{
	return (m_reqSignGrade);
}

const int Form::getReqExecGrade(void) const
{
	return (m_reqExecGrade);
}

void	Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= this->getReqSignGrade())
	{
		std::cout << bureaucrat.getName() << " signed " << this->getName() << " named form." << std::endl;
		m_signed = true;
	}
	else
	{
		throw Form::GradeTooLowException();
	}
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Exception: Grade too high.");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Exception: Grade too low.");
}

std::ostream &operator<<(std::ostream &os, const Form &form)
{
	if (!form.getSignedStatus())
		os << form.getName() << " named form is not signed. Form has a minimum grade required to sign of " << form.getReqSignGrade() << " and has a minimum grade required to execute of " << form.getReqExecGrade();
	else
		os << form.getName() << " named form is signed. Form has a minimum grade required to sign of " << form.getReqSignGrade() << " and has a minimum grade required to execute of " << form.getReqExecGrade();
	return (os);
}