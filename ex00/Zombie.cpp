/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:01:16 by timschmi          #+#    #+#             */
/*   Updated: 2024/11/04 13:01:36 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string Name)
{
	this->Name = Name;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie destroyed: " << Name << std::endl;
}

void Zombie::announce(void)
{
	std::cout << Zombie::Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}