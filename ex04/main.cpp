/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:59:05 by timschmi          #+#    #+#             */
/*   Updated: 2024/11/04 18:06:28 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
	std::string s1, s2;
	
	if (argc != 4)
	{
		std::cerr << "error invalid input" << std::endl;
		return(1);
	}
	
	for(int i = 1; i < argc; i++)
		std::cout << argv[i] << std::endl;

	s1 = argv[2];
	s2 = argv[3];
	
	std::ifstream input(argv[1]);
	if (!input)
	{
		std::cerr << "input file error" << std::endl;
		return(1);
	}
	
	std::ofstream output(std::strcat(argv[1], ".replace"));
	// std::ofstream output("new.txt");
	if (!output)
	{
		std::cerr << "output file error" << std::endl;
		return(1);
	}

	std::string line;
	std::string word;

	// std::cout << s1 << s2 << std::endl;
	
	while (input >> word)
	{
		if (word == s1)
		{
			output << s1;
			std::cout << "alarm" << std::endl;
		}
		else
			output << word;
	}

	output.close();
	input.close();
	
	return (0);
}
