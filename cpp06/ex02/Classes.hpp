/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classes.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:57:48 by alyasar           #+#    #+#             */
/*   Updated: 2022/11/22 16:02:52 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSES_HPP
# define CLASSES_HPP

class Base
{
public:
	virtual ~Base() {}
};

class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};

#endif