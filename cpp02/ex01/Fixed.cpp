/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 19:45:36 by alyasar           #+#    #+#             */
/*   Updated: 2022/10/28 13:22:21 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
	:	m_integer(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed(int int_arg)
{
	std::cout << "Int constructor called" << std::endl;
	setRawBits(int_arg << m_fractional);
}

Fixed::Fixed(float float_arg)
{
	std::cout << "Float constructor called" << std::endl;
	setRawBits((int)roundf(float_arg * (1 << m_fractional)));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
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