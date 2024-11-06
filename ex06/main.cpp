/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: h4ns <h4ns@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:29:33 by timschmi          #+#    #+#             */
/*   Updated: 2024/11/06 15:01:28 by h4ns             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl hs;
	Level eLevel = UNKNOWN;

	if(argc != 2)
		std::cout << "Error: wrong ammount of arguments" << std::endl;
	else
	{
		std::string level = argv[1];
		for(char &c : level)
			c = toupper(c);
		std::unordered_map<std::string, Level> enumMap =
		{
			{"DEBUG", DEBUG},
			{"INFO", INFO},
			{"WARNING", WARNING},
			{"ERROR", ERROR}
		};
		auto it = enumMap.find(level);
		if (it != enumMap.end())
			eLevel = it->second;
		switch (eLevel)
		{
			case DEBUG:
				hs.complain("debug");
			case INFO:
				hs.complain("info");
			case WARNING:
				hs.complain("warning");
			case ERROR:
				hs.complain("error"); break;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl; break;
		}
	}
	return (0);
}
