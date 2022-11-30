/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:23:24 by alyasar           #+#    #+#             */
/*   Updated: 2022/11/22 15:51:19 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Converter_HPP
# define Converter_HPP

#include <string>

class Converter
{
private:
	int		m_int;
	char	m_char;
	float	m_float;
	double	m_double;

	bool	m_int_impossible;
	bool	m_char_impossible;
	bool	m_float_impossible;
	bool	m_double_impossible;

	bool	isChar(std::string str);
	bool	isInt(std::string str);
	bool	isFloat(std::string str);
	bool	isDouble(std::string str);
	bool	isWeird(std::string str);

	void	convertWeird(std::string str);

	int		getInt(void) const;
	char	getChar(void) const;
	float	getFloat(void) const;
	double	getDouble(void) const;

public:
	Converter();
	Converter(const Converter &);
	~Converter();
	Converter &operator=(const Converter &);

	void	convert(std::string str);

	void	printInt(std::ostream &) const;
	void	printChar(std:: ostream &) const;
	void	printFloat(std:: ostream &) const;
	void	printDouble(std:: ostream &) const;

	class MyException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

};

std::ostream &operator<<(std::ostream &, const Converter &);

#endif