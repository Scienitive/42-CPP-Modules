/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:57:34 by alyasar           #+#    #+#             */
/*   Updated: 2022/11/22 17:24:28 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <limits>
#include "Converter.hpp"

Converter::Converter()
	:	m_char_impossible(false), m_int_impossible(false), m_float_impossible(false), m_double_impossible(false),
		m_char(0), m_int(0), m_float(0), m_double(0)
{
}

Converter::Converter(const Converter &converter)
{
	*this = converter;
}

Converter::~Converter()
{
}

Converter &Converter::operator=(const Converter &converter)
{
	m_char = converter.m_char;
	m_int = converter.m_int;
	m_float = converter.m_float;
	m_double = converter.m_double;
	m_char_impossible = converter.m_char_impossible;
	m_int_impossible = converter.m_int_impossible;
	m_float_impossible = converter.m_float_impossible;
	m_double_impossible = converter.m_double_impossible;
	return (*this);
}

bool	Converter::isChar(std::string str)
{
	return (str.length() == 1 && std::isprint(str[0]));
}

bool	Converter::isInt(std::string str)
{
	int i = 0;

	if (str[i] == '+' || str[i] == '-')
		i++;

	for (i = i; i < str.length(); i++)
	{
		if (!std::isdigit(str[i]))
			return (false);
	}

	return (true);
}

bool	Converter::isDouble(std::string str)
{
	bool point = false;
	int i = 0;

	if (str[i] == '+' || str[i] == '-')
		i++;

	for (i = i; i < str.length(); i++)
	{
		if (str[i] == '.' && !point && i != str.length() - 1 && i != 0)
			point = true;
		else if (str[i] == '.' && point)
			return (false);
		else if (!std::isdigit(str[i]))
			return (false);
	}

	if (point)
		return (true);
	else
		return (false);
}

bool	Converter::isFloat(std::string str)
{
	bool flt = false;
	bool point = false;
	int i = 0;

	if (str[i] == '+' || str[i] == '-')
		i++;

	for (i = i; i < str.length(); i++)
	{
		if (str[i] == '.' && !point && i != str.length() - 1 && i != 0)
			point = true;
		else if (str[i] == '.' && point)
			return (false);
		else if (str[i] == 'f' && i == str.length() - 1)
			flt = true;
		else if (!std::isdigit(str[i]))
			return (false);
	}

	if (point && flt)
		return (true);
	else
		return (false);
}

bool	Converter::isWeird(std::string str)
{
	return (str == "-inff" || str == "+inff" || str == "nanf" || str == "-inf" || str == "+inf" || str == "nan");
}

void	Converter::convert(std::string str)
{
	try
	{
		if (isFloat(str))
		{
			m_float = std::stof(str);
			m_char = static_cast<char>(m_float);
			m_int = static_cast<int>(m_float);
			m_double = static_cast<double>(m_float);
		}
		else if (isDouble(str))
		{
			m_double = std::stod(str);
			m_char = static_cast<char>(m_double);
			m_int = static_cast<int>(m_double);
			m_float = static_cast<float>(m_double);
		}
		else if (isInt(str))
		{
			m_int = std::stoi(str);
			m_char = static_cast<char>(m_int);
			m_double = static_cast<double>(m_int);
			m_float = static_cast<float>(m_int);
		}
		else if (isChar(str))
		{
			m_char = str[0];
			m_int = static_cast<char>(m_char);
			m_float = static_cast<float>(m_char);
			m_double = static_cast<double>(m_char);
		}
		else if (isWeird(str))
			convertWeird(str);
		else
			throw Converter::MyException();
	}
	catch (std::exception &e)
	{
		m_char_impossible = true;
		m_int_impossible = true;
		m_float_impossible = true;
		m_double_impossible = true;
		return;
	}
}

void	Converter::convertWeird(std::string str)
{
	m_char_impossible = true;
	m_int_impossible = true;

	if (str == "nan" || str == "nanf")
	{
		m_float = std::numeric_limits<float>::quiet_NaN();
		m_double = std::numeric_limits<double>::quiet_NaN();
	}
	else if (str == "+inf" || str == "+inff")
	{
		m_float = std::numeric_limits<float>::infinity();
		m_double = std::numeric_limits<double>::infinity();
	}
	else if (str == "-inf" || str == "-inff")
	{
		m_float = -std::numeric_limits<float>::infinity();
		m_double = -std::numeric_limits<double>::infinity();
	}
}

char	Converter::getChar(void) const
{
	return (m_char);
}

int		Converter::getInt(void) const
{
	return (m_int);
}

float	Converter::getFloat(void) const
{
	return (m_float);
}

double	Converter::getDouble(void) const
{
	return (m_double);
}

void	Converter::printChar(std::ostream &os) const
{
	if (m_char_impossible)
	{
		os << "impossible" << std::endl;
		return;
	}

	if (std::isprint(this->getChar()))
		os << "'" << this->getChar() << "'" << std::endl;
	else
		os << "Non displayable" << std::endl;
}

void	Converter::printInt(std::ostream &os) const
{
	if (m_int_impossible)
	{
		os << "impossible" << std::endl;
		return;
	}

	os << this->getInt() << std::endl;
}

void	Converter::printFloat(std::ostream &os) const
{
	if (m_float_impossible)
	{
		os << "impossible" << std::endl;
		return;
	}

	os << this->getFloat();
	if (this->getFloat() - static_cast<int>(this->getFloat()) == 0)
		os << ".0";
	os << "f" << std::endl;
}

void	Converter::printDouble(std::ostream &os) const
{
	if (m_double_impossible)
	{
		os << "impossible" << std::endl;
		return;
	}

	os << this->getDouble();
	if (this->getDouble() - static_cast<int>(this->getDouble()) == 0)
		os << ".0";
	os << std::endl;
}

const char *Converter::MyException::what() const throw()
{
	return ("Exception");
}

std::ostream &operator<<(std::ostream &os, const Converter &converter)
{
	os << "char: ";
	converter.printChar(os);
	os << "int: ";
	converter.printInt(os);
	os << "float: ";
	converter.printFloat(os);
	os << "double: ";
	converter.printDouble(os);
	return (os);
}