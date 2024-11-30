/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:42:31 by timschmi          #+#    #+#             */
/*   Updated: 2024/11/30 12:41:30 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";

	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "\033[35m" << &str << " | " << stringPTR << " | " << &stringREF << "\033[0m" << std::endl;

	std::cout << "\033[33m" << str << " | " << *stringPTR << " | " << stringREF << "\033[0m" << std::endl;

	return (0);
}
