/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:15:19 by alyasar           #+#    #+#             */
/*   Updated: 2022/11/24 12:39:03 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
Array<T>::Array()
	:	m_size(0)
{
	m_array = new T[0];
}

template<typename T>
Array<T>::Array(unsigned int n)
	:	m_size(n)
{
	m_array = new T[n];
	for (unsigned int i = 0; i < m_size; i++)
		m_array[i] = 0;
}

template<typename T>
Array<T>::Array(const Array<T> &array)
	:	m_size(array.size())
{
	m_array = new T[array.size()];
	for (unsigned int i = 0; i < m_size; i++)
		m_array[i] = array.m_array[i];
}

template<typename T>
Array<T>::~Array()
{
	delete[] m_array;
}

template<typename T>
Array<T>	&Array<T>::operator=(const Array<T> &array)
{
	delete[] m_array;
	m_size = array.size();
	m_array = new T[m_size];
	for (unsigned int i = 0; i < m_size; i++)
		m_array[i] = array.m_array[i];

	return (*this);
}

template<typename T>
T	&Array<T>::operator[](unsigned int n)
{
	if (n >= size())
		throw Array<T>::IndexOutOfRange();
	return (m_array[n]);
}

template<typename T>
const T	&Array<T>::operator[](unsigned int n) const
{
	if (n >= size())
		throw Array<T>::IndexOutOfRange();
	return (m_array[n]);
}

template<typename T>
unsigned int	Array<T>::size(void) const
{
	return (m_size);
}

template<typename T>
const char *Array<T>::IndexOutOfRange::what() const throw()
{
	return ("Exception: Index out of the range of the array.");
}