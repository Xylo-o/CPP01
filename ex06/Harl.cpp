/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:22:17 by adprzyby          #+#    #+#             */
/*   Updated: 2024/10/31 16:37:29 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void ) {
	std::cout << "[ DEBUG ]\n" << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl::info( void ) {
	std::cout << "[ INFO ]\n" << "I cannot believe adding extra bacon costs more money. You didn’t put "
			 "enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}
void Harl::warning( void ) {
	std::cout << "[ WARNING ]\n" << "I think I deserve to have some extra bacon for free. I’ve been coming for "
			 "years whereas you started working here since last month.\n";
}
void Harl::error( void ) {
	std::cout << "[ ERROR ]\n" << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain( std::string level ) {
	int complaints = -1;
	void (Harl::*functions[])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; ++i) {
		// printf("%d\n", i);
		if (levels[i] == level) {
			complaints = i;
		}
	}
	switch (complaints) {
		case 0:
		case 1:
		case 2:
		case 3:
			for (int i = complaints; i < 4; i++) {
				(this->*functions[i])();
				std::cout << std::endl;
			}			
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
			break;
	}
}