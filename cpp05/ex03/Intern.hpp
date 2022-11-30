/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:05:33 by alyasar           #+#    #+#             */
/*   Updated: 2022/11/22 17:05:42 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"

class Intern
{
public:
	Intern();
	Intern(const Intern &);
	~Intern();
	Intern &operator=(const Intern &);

	AForm	*makeform(std::string, std::string);
};

#endif