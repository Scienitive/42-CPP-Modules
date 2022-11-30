/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 19:45:36 by alyasar           #+#    #+#             */
/*   Updated: 2022/10/28 14:43:30 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
	:	m_x(0), m_y(0)
{
}

Point::Point(const float x, const float y)
	:	m_x(Fixed(x)), m_y(Fixed(y))
{
}

Point::Point(const Point &point)
	:	m_x(point.getX()), m_y(point.getY())
{
}

Point &Point::operator=(Point &point)
{
	return (point);
}

Point::~Point()
{
}

Fixed Point::getX(void) const
{
	return (m_x);
}

Fixed Point::getY(void) const
{
	return (m_y);
}