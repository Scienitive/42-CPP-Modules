/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 08:50:00 by alyasar           #+#    #+#             */
/*   Updated: 2022/11/30 20:09:24 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	:	AForm("RobotomyRequestForm", 72, 45)
{
	srand(time(0));
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target)
	:	AForm("RobotomyRequestForm", 72, 45), m_target(target)
{
	srand(time(0));
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &shr)
	:	AForm(shr), m_target(shr.m_target)
{
	srand(time(0));
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &shr)
{
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() > this->getReqExecGrade())
		throw AForm::GradeTooLowException();
	else if (!this->getSignedStatus())
		throw AForm::FormNotSignedException();
	else
	{
		int random = rand() % 2;

		if (random)
			std::cout << m_target << " has been robotomized." << std::endl;
		else
			std::cout << m_target << "'s robotomy has been failed." << std::endl;
	}
}