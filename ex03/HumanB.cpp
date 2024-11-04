/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:34:45 by timschmi          #+#    #+#             */
/*   Updated: 2024/11/04 16:50:09 by timschmi         ###   ########.fr       */
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
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	return; 
}
