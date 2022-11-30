/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 08:39:05 by alyasar           #+#    #+#             */
/*   Updated: 2022/11/30 20:09:28 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	:	AForm("ShrubberyCreationForm", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target)
	:	AForm("ShrubberyCreationForm", 145, 137), m_target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &shr)
	:	AForm(shr), m_target(shr.m_target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &shr)
{
	return (*this);
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() > this->getReqExecGrade())
		throw AForm::GradeTooLowException();
	else if (!this->getSignedStatus())
		throw AForm::FormNotSignedException();
	else
	{
		std::ofstream file(m_target + "_shrubbery");

		file << "                      ___" << std::endl;
		file << "                _,-'\"\"   \"\"\"\"`--." << std::endl;
		file << "             ,-'          __,,-- \\" << std::endl;
		file << "           ,\'    __,--\"\"\"\"dF      )" << std::endl;
		file << "          /   .-\"Hb_,--\"\"dF      /" << std::endl;
		file << "        ,\'       _Hb ___dF\"-._,-'" << std::endl;
		file << "      ,'      _,-\"\"\"\"   \"\"--..__" << std::endl;
		file << "     (     ,-'                  `." << std::endl;
		file << "      `._,'     _   _             ;" << std::endl;
		file << "       ,'     ,' `-'Hb-.___..._,-'" << std::endl;
		file << "       \\    ,'\"Hb.-\'HH`-.dHF\"" << std::endl;
		file << "        `--\'   \"Hb  HH  dF\"" << std::endl;
		file << "                \"Hb HH dF" << std::endl;
		file << "                 \"HbHHdF" << std::endl;
		file << "                  |HHHF" << std::endl;
		file << "                  |HHH|" << std::endl;
		file << "                  |HHH|" << std::endl;
		file << "                  |HHH|" << std::endl;
		file << "                  |HHH|" << std::endl;
		file << "                  dHHHb" << std::endl;
		file << "                .dFd|bHb.               o" << std::endl;
		file << "      o       .dHFdH|HbTHb.          o /" << std::endl;
		file << "\\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y" << std::endl;
		file << "##########################################" << std::endl;
		file.close();
	}
}