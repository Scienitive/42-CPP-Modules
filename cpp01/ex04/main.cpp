/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyasar <alyasar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 19:36:06 by alyasar           #+#    #+#             */
/*   Updated: 2022/10/25 14:16:07 by alyasar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>

void	replace(std::string filename, std::string s1, std::string s2)
{
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		line;
	size_t			found;
	bool			start;

	start = false;
	infile.open(filename, std::ios::in);
	if (!infile)
	{
		std::cout << "No file exists in that name." << std::endl;
		return;
	}
	outfile.open(filename.append(".replace"), std::ios::out);
	while (std::getline(infile, line))
	{
		if (start)
			outfile << std::endl;
		start = true;
		found = line.find(s1);
		while (found != std::string::npos)
		{
			line.erase(found, s1.length());
			line.insert(found, s2);
			found = line.find(s1);
		}
		outfile << line;
	}
	infile.close();
	outfile.close();
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong argument number." << std::endl;
		return (1);
	}
	replace(std::string(argv[1]), std::string(argv[2]), std::string(argv[3]));
}