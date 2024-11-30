/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:29:33 by timschmi          #+#    #+#             */
/*   Updated: 2024/11/30 13:23:26 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl hs;

	hs.complain("debug");
	hs.complain("info");
	hs.complain("warning");
	hs.complain("error");
	// hs.complain("invalid");

	return (0);
}
