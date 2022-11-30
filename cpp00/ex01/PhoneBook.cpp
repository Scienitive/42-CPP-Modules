/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 12:31:00 by alyasar           #+#    #+#             */
/*   Updated: 2022/10/23 16:50:14 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->contact_added = 0;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::start_prompt(void)
{
	std::cout<<"# Enter a command [ADD, SEARCH, EXIT] #"<<std::endl;
}

void	PhoneBook::add_contact(void)
{
	if (this->contacts[this->contact_added % MAX_INDEX].set_info(this->contact_added % MAX_INDEX))
		this->contact_added++;
	start_prompt();
}

void	PhoneBook::search(void)
{
	std::string	command;
	int			index;

	if (this->contact_added == 0)
	{
		std::cout<<"# You must add a contact to search #"<<std::endl;
		start_prompt();
		return;
	}
	std::cout<<"---------------------------------------------"<<std::endl;
	std::cout<<"|     Index|First Name| Last Name|  Nickname|"<<std::endl;
	for (int i = 0; i < this->contact_added && i < MAX_INDEX; i++)
	{
		if (this->contact_added <= MAX_INDEX)
			this->contacts[i].search(i + 1);
		else
			this->contacts[((this->contact_added % MAX_INDEX) + i) % MAX_INDEX].search(i + 1);
	}
	std::cout<<"---------------------------------------------"<<std::endl;
	std::cout<<"# Index of the contact you're looking for (0 or non-numerical value to exit) #"<<std::endl;
	while (true)
	{
		do
		{
			std::cout<<"> ";
			std::getline(std::cin, command);
		}
		while (command.length() == 0);
		index = std::atoi(command.c_str());
		if (index >= 0 && index <= MAX_INDEX && index <= this->contact_added)
		{
			if (index != 0)
			{
				if (this->contact_added <= MAX_INDEX)
					this->contacts[index - 1].display_info(index);
				else
					this->contacts[((this->contact_added % MAX_INDEX) + index - 1) % MAX_INDEX].display_info(index);
			}
			start_prompt();
			break;
		}
		std::cout<<"# Invalid index #"<<std::endl;
	}	
}