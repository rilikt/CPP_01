/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:59:05 by timschmi          #+#    #+#             */
/*   Updated: 2024/11/30 12:57:14 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstring>
#include <fstream>

int main(int argc, char **argv)
{
	std::string s1, s2, line;
	size_t index;
	int i = 1;

	if (argc != 4)
		return(std::cerr << "\033[31m" << "Error: wrong number of arguments!" << "\033[0m" << std::endl, 1);
	
	s1 = argv[2];
	s2 = argv[3];

	//opening input file to read from
	std::ifstream input(argv[1]);
	if (!input)
		return(std::cerr << "\033[31m" << "Error opening input file" << "\033[0m" << std::endl, 1);

	//opening, creating output file to write to
	std::ofstream output(std::strcat(argv[1], ".replace"));
	if (!output)
		return(std::cerr << "\033[31m" << "Output file Error" << "\033[0m" << std::endl, 1);
	
	while (std::getline(input, line))
	{
		index = line.find(s1);
		if (index == std::string::npos)
			std::cout << "\033[33m" << "No match found in line: " << i << "\033[0m" << std::endl;
		else
		{
			line.erase(index, s1.length());
			line.insert(index, s2);
		}
		
		output << line;
		if(!input.eof())
			output << std::endl;
		i++;
	}

	output.close();
	input.close();
	
	return (0);
}
