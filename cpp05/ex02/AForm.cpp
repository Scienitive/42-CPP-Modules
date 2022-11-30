/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:33:25 by alyasar           #+#    #+#             */
/*   Updated: 2022/11/17 09:08:39 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

void	checkGrades(int signGrade, int execGrade)
{
	if (signGrade < Bureaucrat::max_grade)
		throw AForm::GradeTooHighException();
	else if (signGrade > Bureaucrat::min_grade)
		throw AForm::GradeTooLowException();
	if (execGrade < Bureaucrat::max_grade)
		throw AForm::GradeTooHighException();
	else if (execGrade > Bureaucrat::min_grade)
		throw AForm::GradeTooLowException();
}

AForm::AForm()
	:	m_name("AForm"), m_reqSignGrade(150), m_reqExecGrade(150), m_signed(false)
{
	std::cout << "AForm constructed." << std::endl;
}

AForm::AForm(const std::string name, const int reqSignGrade, const int reqExecGrade)
	:	m_name(name), m_reqSignGrade(reqSignGrade), m_reqExecGrade(reqExecGrade), m_signed(false)
{
	checkGrades(reqSignGrade, reqExecGrade);
	std::cout << "AForm constructed." << std::endl;
}

AForm::AForm(const AForm &form)
	:	m_name(form.getName()), m_reqSignGrade(form.getReqSignGrade()), m_reqExecGrade(form.getReqExecGrade()), m_signed(form.getSignedStatus())
{
	std::cout << "AForm copy constructed." << std::endl;
}

AForm::~AForm()
{
	std::cout << "AForm destructed." << std::endl;
}

AForm &AForm::operator=(const AForm &form)
{
	std::cout << "Bureaucrat copy assignment operator executed." << std::endl;
	m_signed = form.getSignedStatus();
	return (*this);
}

const std::string AForm::getName(void) const
{
	return (m_name);
}

bool AForm::getSignedStatus(void) const
{
	return (m_signed);
}

const int AForm::getReqSignGrade(void) const
{
	return (m_reqSignGrade);
}

const int AForm::getReqExecGrade(void) const
{
	return (m_reqExecGrade);
}

void	AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= this->getReqSignGrade())
	{
		std::cout << bureaucrat.getName() << " signed " << this->getName() << " named form." << std::endl;
		m_signed = true;
	}
	else
	{
		throw AForm::GradeTooLowException();
	}
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Exception: Grade too high.");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Exception: Grade too low.");
}

const char *AForm::FormNotSignedException::what() const throw()
{
	return ("Exception: Form is not signed.");
}

std::ostream &operator<<(std::ostream &os, const AForm &form)
{
	if (!form.getSignedStatus())
		os << form.getName() << " named form is not signed. AForm has a minimum grade required to sign of " << form.getReqSignGrade() << " and has a minimum grade required to execute of " << form.getReqExecGrade();
	else
		os << form.getName() << " named form is signed. AForm has a minimum grade required to sign of " << form.getReqSignGrade() << " and has a minimum grade required to execute of " << form.getReqExecGrade();
	return (os);
}