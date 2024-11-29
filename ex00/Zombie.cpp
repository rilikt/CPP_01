/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:01:16 by timschmi          #+#    #+#             */
/*   Updated: 2024/11/29 15:10:47 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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
	std::cout << "\033[32m" << Zombie::Name << ": BraiiiiiiinnnzzzZ..." << "\033[0m" << std::endl;
}
