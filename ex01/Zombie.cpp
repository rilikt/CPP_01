/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:01:16 by timschmi          #+#    #+#             */
/*   Updated: 2024/11/30 12:34:26 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string Name)
{
	this->Name = Name;
}

Zombie::~Zombie(void)
{
	std::cout << "\033[31m" << "Zombie destroyed: " << Name <<  "\033[0m" << std::endl;
}

void Zombie::announce(void)
{
	if (this->Name == "")
		std::cout << "\033[31m" << "Make sure to give your Zombie a name" << "\033[0m" << std::endl;
	else
		std::cout << "\033[32m" << Zombie::Name << ": BraiiiiiiinnnzzzZ..." << "\033[0m" << std::endl;
}

void Zombie::set_name(std::string name)
{
	this->Name = name;
}
