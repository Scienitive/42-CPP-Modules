/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 12:11:46 by alyasar           #+#    #+#             */
/*   Updated: 2022/08/22 14:01:15 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <string>
# include <cstring>

# define MAX_INDEX 8

class PhoneBook
{
private:
	size_t	contact_added;
	Contact	contacts[MAX_INDEX];
public:
	PhoneBook();
	~PhoneBook();

	void	start_prompt(void);
	void	add_contact(void);
	void	search(void);
};

#endif