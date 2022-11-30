/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 19:45:38 by alyasar           #+#    #+#             */
/*   Updated: 2022/10/28 13:37:53 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

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

	Fixed(const int);
	Fixed(const float);
	
	int	getRawBits(void) const;
    void setRawBits(int);
	float toFloat(void) const;
	int toInt(void) const;

	bool operator>( Fixed const &) const;
	bool operator<( Fixed const &) const;
	bool operator>=( Fixed const &) const;
	bool operator<=( Fixed const &) const;
	bool operator==( Fixed const &) const;
	bool operator!=( Fixed const &) const;
	Fixed operator+( Fixed const &) const;
	Fixed operator-( Fixed const &) const;
	Fixed operator*( Fixed const &) const;
	Fixed operator/( Fixed const &) const;

	Fixed &operator++(void);
	Fixed &operator--(void);
	Fixed operator++(int);
	Fixed operator--(int);

	static Fixed &min(Fixed &, Fixed &);
	static Fixed &max(Fixed &, Fixed &);
	static const Fixed &min(const Fixed &, const Fixed &);
	static const Fixed &max(const Fixed &, const Fixed &);
};

std::ostream &operator<<(std::ostream &, Fixed const &);

#endif