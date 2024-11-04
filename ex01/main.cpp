/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:16:00 by timschmi          #+#    #+#             */
/*   Updated: 2024/11/04 14:40:03 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *x;
	int N = 10;

	x = zombieHorde(N, "Brian");

	for(int i = 0; i < N; i++)
		x[i].announce();
	
	delete[] x;
	
	return(0);
}
