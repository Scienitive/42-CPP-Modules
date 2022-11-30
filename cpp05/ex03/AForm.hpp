/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:09:05 by alyasar           #+#    #+#             */
/*   Updated: 2022/11/17 09:27:10 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"
# include <iostream>
# include <string>
# include <exception>

class Bureaucrat;

class AForm
{
private:
	const std::string	m_name;
	bool				m_signed;
	const int			m_reqSignGrade;
	const int			m_reqExecGrade;

	AForm();

public:
	AForm(const std::string, const int, const int);
	AForm(const AForm &);
	virtual ~AForm();
	AForm &operator=(const AForm &);

	const std::string	getName(void) const;
	bool				getSignedStatus(void) const;
	const int			getReqSignGrade(void) const;
	const int			getReqExecGrade(void) const;

	void				beSigned(const Bureaucrat &);

	virtual void		execute(const Bureaucrat &) const = 0;

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
	class FormNotSignedException : public std::exception
	{
	public:
		const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &, const AForm &);

#endif