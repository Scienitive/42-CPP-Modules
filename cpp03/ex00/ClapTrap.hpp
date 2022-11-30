/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:00:56 by alyasar           #+#    #+#             */
/*   Updated: 2022/11/05 15:41:43 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
private:
	std::string		m_name;
	unsigned int	m_hp;
	unsigned int	m_ep;
	unsigned int	m_ad;

public:
	ClapTrap();
	ClapTrap(std::string);
	ClapTrap(const ClapTrap &);
	~ClapTrap();
	ClapTrap &operator=(const ClapTrap &);

	void	attack(const std::string &);
	void	takeDamage(unsigned int);
	void	beRepaired(unsigned int);
};

#endif