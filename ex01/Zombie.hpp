/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:21:23 by timschmi          #+#    #+#             */
/*   Updated: 2024/11/30 12:22:57 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <cstring>
#include <memory>

class Zombie
{
	private:
		std::string Name;

	public:
		Zombie();
		Zombie(std::string Name);
		~Zombie(void);
		void set_name(std::string name);
		void announce( void );
};

Zombie* zombieHorde( int N, std::string name );

#endif
