/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:05:55 by alyasar           #+#    #+#             */
/*   Updated: 2022/11/17 12:36:54 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat
{
private:
	const std::string	m_name;
	int					m_grade;

	Bureaucrat();

public:
	Bureaucrat(const std::string, int);
	Bureaucrat(const Bureaucrat &);
	~Bureaucrat();
	Bureaucrat &operator=(const Bureaucrat &);

	static const int	min_grade = 150;
	static const int	max_grade = 1;

	const std::string	getName(void) const;
	int					getGrade(void) const;

	void				incrementGrade(void);
	void				decrementGrade(void);

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

std::ostream &operator<<(std::ostream &, const Bureaucrat &);

#endif