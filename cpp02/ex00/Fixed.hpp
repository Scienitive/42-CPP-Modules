/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 19:45:38 by alyasar           #+#    #+#             */
/*   Updated: 2022/10/28 08:12:18 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
private:
	int					m_integer;
	static const int	m_fractional = 8;

public:
	Fixed();
	Fixed(const Fixed &);
	~Fixed();
	Fixed &operator=(const Fixed &);
	
	int getRawBits(void) const;
    void setRawBits(int);
};

#endif