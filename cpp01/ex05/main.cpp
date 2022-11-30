/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:38:52 by alyasar           #+#    #+#             */
/*   Updated: 2022/07/07 14:06:53 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl	harl;

	harl.complain("level");
	harl.complain("warning");
	harl.complain("error");
	harl.complain("info");
	harl.complain("level");
	harl.complain("debug");
}