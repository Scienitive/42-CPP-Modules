/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 01:21:49 by alyasar           #+#    #+#             */
/*   Updated: 2022/11/24 13:05:40 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <cmath>

Span::Span(unsigned int N)
	:	m_limit(N)
{
}

Span::Span(const Span &span)
	:	m_list(span.m_list), m_limit(span.m_limit)
{
}

Span::~Span()
{
}

Span	&Span::operator=(const Span &span)
{
	m_list = span.m_list;
	m_limit = span.m_limit;
	return (*this);
}

void	Span::addNumber(int value)
{
	if (m_list.size() >= m_limit)
		throw Span::LimitExceeded();

	m_list.push_back(value);
}

void	Span::addNumber(std::list<int>::iterator begin, std::list<int>::iterator end)
{
	while (begin != end)
	{
		if (m_list.size() >= m_limit)
			throw Span::LimitExceeded();
		m_list.push_back(*begin);
		begin = std::next(begin);
	}
}

unsigned int	Span::shortestSpan(void) const
{
	unsigned int ret;

	if (m_list.size() < 2)
		throw Span::NoSpanCanBeFound();

	std::list<int>::const_iterator it1 = m_list.begin();
	std::list<int>::const_iterator it2;

	for (; it1 != m_list.end(); it1++)
	{
		for(it2 = std::next(it1); it2 != m_list.end(); it2++)
		{
			if (it1 == m_list.begin() && it2 == std::next(it1))
				ret = std::abs(*it2 - *it1);
			else if (std::abs(*it2 - *it1) < ret)
				ret = std::abs(*it2 - *it1);
			if (ret == 0)
				return (ret);
		}
	}

	return (ret);
}

unsigned int	Span::longestSpan(void) const
{
	if (m_list.size() < 2)
		throw Span::NoSpanCanBeFound();

	std::list<int>::const_iterator max = std::max_element(m_list.begin(), m_list.end());
	std::list<int>::const_iterator min = std::min_element(m_list.begin(), m_list.end());

	return (std::abs(*max - *min));
}

const char *Span::LimitExceeded::what() const throw()
{
	return ("Exception: Limit exceeded.");
}

const char *Span::NoSpanCanBeFound::what() const throw()
{
	return ("Exception: No span can be found.");
}