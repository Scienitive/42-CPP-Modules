/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:09:05 by alyasar           #+#    #+#             */
/*   Updated: 2022/11/15 14:34:06 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <iostream>
# include <string>
# include <exception>

class Bureaucrat;

class Form
{
private:
	const std::string	m_name;
	bool				m_signed;
	const int			m_reqSignGrade;
	const int			m_reqExecGrade;

	Form();

public:
	Form(const std::string, const int, const int);
	Form(const Form &);
	~Form();
	Form &operator=(const Form &);

	const std::string	getName(void) const;
	bool				getSignedStatus(void) const;
	const int			getReqSignGrade(void) const;
	const int			getReqExecGrade(void) const;

	void				beSigned(const Bureaucrat &);

	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &, const Form &);

#endif