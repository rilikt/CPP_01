/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:29:29 by timschmi          #+#    #+#             */
/*   Updated: 2024/11/30 13:30:37 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <unordered_map>
#include <string>

enum Level
{
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	UNKNOWN
};

class Harl
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	
	public:
		Harl() {};
		~Harl() {};
		void complain(std::string level);

};

#endif
