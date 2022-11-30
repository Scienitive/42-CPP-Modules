/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 13:21:29 by alyasar           #+#    #+#             */
/*   Updated: 2022/11/24 12:38:57 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template<typename T>
class Array
{
private:
	T				*m_array;
	unsigned int	m_size;

public:
	Array();
	Array(unsigned int n);
	Array(const Array &);
	~Array();
	Array &operator=(const Array &);

	T	&operator[](unsigned int);
	const T	&operator[](unsigned int) const;

	unsigned int	size(void) const;

	class IndexOutOfRange : public std::exception
	{
	public:
		const char *what() const throw();
	};
};

#endif