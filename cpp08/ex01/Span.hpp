/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 01:12:57 by alyasar           #+#    #+#             */
/*   Updated: 2022/11/19 14:34:08 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <list>
#include <exception>

class Span
{
private:
	std::list<int>	m_list;
	unsigned int	m_limit;

	Span();

public:
	Span(unsigned int);
	Span(const Span &);
	~Span();
	Span &operator=(const Span &);

	void				addNumber(int);
	unsigned int		shortestSpan(void) const;
	unsigned int		longestSpan(void) const;
	void				addNumber(std::list<int>::iterator, std::list<int>::iterator);

	class LimitExceeded : public std::exception
	{
	public:
		const char *what() const throw();
	};

	class NoSpanCanBeFound : public std::exception
	{
	public:
		const char *what() const throw();
	};
};

#endif