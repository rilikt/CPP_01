/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:01:57 by timschmi          #+#    #+#             */
/*   Updated: 2024/11/29 15:28:09 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &x) : weapon(x)
{
	this->name = name;
}

void HumanA::attack(void)
{
	std::cout << "\033[31m" << name << " attacks with their " << weapon.getType() << "\033[0m" << std::endl;
	return; 
}
