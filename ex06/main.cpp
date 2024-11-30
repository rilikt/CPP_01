/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:29:33 by timschmi          #+#    #+#             */
/*   Updated: 2024/11/30 13:37:59 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl hs;
	Level eLevel = UNKNOWN;

	if(argc != 2)
		std::cout << "\033[31m" << "Error: wrong ammount of arguments" << "\033[0m" << std::endl;
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
				[[fallthrough]];
			case INFO:
				hs.complain("info");
				[[fallthrough]];
			case WARNING:
				hs.complain("warning");
				[[fallthrough]];
			case ERROR:
				hs.complain("error"); break;
			default:
				std::cout << "\033[30m" << "[ Probably complaining about insignificant problems ]" << "\033[0m" << std::endl; break;
		}
	}
	return (0);
}
