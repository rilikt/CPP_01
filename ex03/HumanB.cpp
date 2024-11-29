/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:34:45 by timschmi          #+#    #+#             */
/*   Updated: 2024/11/29 15:28:31 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : weapon(nullptr)
{
	this->name = name;
}

void HumanB::setWeapon(Weapon &x)
{
	weapon = &x;
	return;
}

void HumanB::attack(void)
{
	std::cout << "\033[31m" << name << " attacks with their " << weapon->getType() << "\033[0m" << std::endl;
	return; 
}
