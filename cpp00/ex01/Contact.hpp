/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 12:13:37 by alyasar           #+#    #+#             */
/*   Updated: 2022/10/23 16:35:49 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
private:
	static std::string	field_names[5];
	std::string			info[5];
public:
	Contact();
	~Contact();

	bool	set_info(int index);
	void	search(int index);
	void	display_info(int index);
};

#endif