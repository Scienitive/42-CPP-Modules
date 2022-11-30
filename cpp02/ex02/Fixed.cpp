/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 19:45:36 by alyasar           #+#    #+#             */
/*   Updated: 2022/10/28 16:31:05 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
	:	m_integer(0)
{
}

Fixed::Fixed(const Fixed &fixed)
{
	*this = fixed;
}

Fixed::Fixed(int int_arg)
{
	setRawBits(int_arg << m_fractional);
}

Fixed::Fixed(float float_arg)
{
	setRawBits((int)roundf(float_arg * (1 << m_fractional)));
}

Fixed::~Fixed()
{
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	m_integer = fixed.getRawBits();
	return (*this);
}

int Fixed::getRawBits() const
{
    return (m_integer);
}

void Fixed::setRawBits(int raw)
{
    m_integer = raw;
}

int Fixed::toInt(void) const
{
	return (getRawBits() >> m_fractional);
}

float Fixed::toFloat(void) const
{
	return ((float)getRawBits() / (1 << m_fractional));
}

std::ostream &operator<<(std::ostream &os, Fixed const &fixed)
{
	os << fixed.toFloat();
	return (os);
}

bool Fixed::operator>(Fixed const &fixed) const
{
	return (getRawBits() > fixed.getRawBits());
}

bool Fixed::operator<(Fixed const &fixed) const
{
	return (getRawBits() < fixed.getRawBits());
}

bool Fixed::operator>=(Fixed const &fixed) const
{
	return (getRawBits() >= fixed.getRawBits());
}

bool Fixed::operator<=(Fixed const &fixed) const
{
	return (getRawBits() <= fixed.getRawBits());
}

bool Fixed::operator==(Fixed const &fixed) const
{
	return (getRawBits() == fixed.getRawBits());
}

bool Fixed::operator!=(Fixed const &fixed) const
{
	return (getRawBits() != fixed.getRawBits());
}

Fixed Fixed::operator+(Fixed const &fixed) const
{
	Fixed ret(toFloat() + fixed.toFloat());

	return (ret);
}

Fixed Fixed::operator-(Fixed const &fixed) const
{
	Fixed ret(toFloat() - fixed.toFloat());

	return (ret);
}

Fixed Fixed::operator*(Fixed const &fixed) const
{
	Fixed ret(toFloat() * fixed.toFloat());

	return (ret);
}

Fixed Fixed::operator/(Fixed const &fixed) const
{
	Fixed ret(toFloat() / fixed.toFloat());

	return (ret);
}

Fixed &Fixed::operator++(void)
{
	m_integer += 1;

	return (*this);
}

Fixed &Fixed::operator--(void)
{
	m_integer -= 1;

	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);

	m_integer += 1;
	return (temp);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);

	m_integer -= 1;
	return (temp);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}
	
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}