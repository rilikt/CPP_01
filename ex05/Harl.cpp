/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:29:36 by timschmi          #+#    #+#             */
/*   Updated: 2024/11/30 13:22:51 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug()
{
	std::cout << "\033[33m" << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << "\033[0m" << std::endl;
}

void Harl::info()
{
	std::cout << "\033[32m" << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << "\033[0m" << std::endl;
}

void Harl::warning()
{
	std::cout << "\033[31m" << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << "\033[0m" << std::endl;
}

void Harl::error()
{
	std::cout << "\033[35m" << "This is unacceptable! I want to speak to the manager now." << "\033[0m" << std::endl;
}

void Harl::complain(std::string level)
{
	std::unordered_map<std::string, void (Harl::*)()> fctMap = {
		{"debug", &Harl::debug},
		{"info", &Harl::info},
		{"warning", &Harl::warning},
		{"error", &Harl::error}
	};
	
	auto it = fctMap.find(level);
	if (it == fctMap.end())
	{
		std::cerr << "\033[31m" << "Error: no matching function found for " + level << "\033[0m" << std::endl;
		return ;
	}

	std::cout << it->first << std::endl;

	(this->*it->second)();
}
