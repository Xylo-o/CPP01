/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:30:26 by adprzyby          #+#    #+#             */
/*   Updated: 2024/10/28 15:57:59 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void ) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl::info( void ) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put "
			 "enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}
void Harl::warning( void ) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for "
			 "years whereas you started working here since last month.\n";
}
void Harl::error( void ) {
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain( std::string level ) {
	if (level.compare("DEBUG") == 0) {
		debug();
	}
	else if (level.compare("INFO") == 0) {
		info();
	}
	else if (level.compare("WARNING") == 0) {
		warning();
	}
	else if (level.compare("ERROR") == 0) {
		error();
	}
	else {
		std::cout << "I'll shut up...\n";
	}
}
