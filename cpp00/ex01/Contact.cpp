/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 13:07:43 by alyasar           #+#    #+#             */
/*   Updated: 2022/10/23 16:38:53 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string	Contact::field_names[5] = 
{
	"First Name",
	"Last Name",
	"Nickname",
	"Phone Number",
	"Darkest Secret"
};

Contact::Contact()
{
}

Contact::~Contact()
{
}

bool	Contact::set_info(int index)
{
	for (int i = 0; i < 5; i++)
	{
		std::cout<<"# "<<Contact::field_names[i]<<" #\n";
		do
		{
			std::cout<<"> ";
			std::getline(std::cin, this->info[i]);
		}
		while (this->info[i].length() == 0);
	}
	std::cout<<"# Contact added #"<<std::endl;
	return (true);
}

void	Contact::search(int index)
{
	std::string	str;

	std::cout<<"|         "<<std::to_string(index)<<"|";
	for (int i = 0; i < 3; i++)
	{
		str = Contact::info[i];
		for(int j = 0; j < (10 - (int)str.length()); j++)
			std::cout<<" ";
		if (str.length() > 10)
			std::cout<<str.substr(0, 9)<<".";
		else
			std::cout<<str;
		std::cout<<"|";
	}
	std::cout<<std::endl;
}

void	Contact::display_info(int index)
{
	std::cout<<"---------------------------------------------"<<std::endl;
	std::cout<<"# Contact ["<<std::to_string(index)<<"] #"<<std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout<<field_names[i]<<": ";
		std::cout<<info[i]<<std::endl;
	}
	std::cout<<"---------------------------------------------"<<std::endl;
}