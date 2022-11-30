/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 19:45:38 by alyasar           #+#    #+#             */
/*   Updated: 2022/10/28 14:41:57 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	private:
		const Fixed m_x;
		const Fixed m_y;
	public:
		Point();
		Point(const float, const float);
		Point(const Point &);
		Point &operator=(Point &);
		~Point();

		Fixed getX(void) const;
		Fixed getY(void) const;
};

bool bsp(const Point, const Point, const Point, const Point);

#endif