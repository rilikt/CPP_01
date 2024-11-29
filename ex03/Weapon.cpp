/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:51:14 by timschmi          #+#    #+#             */
/*   Updated: 2024/11/29 15:03:17 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void Weapon::setType(std::string type)
{
	this->type = type;
	return ;
}

const std::string &Weapon::getType(void)
{
	const std::string &ref = type;
	return (ref);
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}
