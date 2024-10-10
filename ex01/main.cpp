/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:41:00 by adprzyby          #+#    #+#             */
/*   Updated: 2024/10/10 18:01:17 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ( void ) {
	int N = 8;
	std::string name = "Horde Zombieee";
	Zombie *horde = zombieHorde(N,name);
	if (horde != nullptr) {
		for(int i; i < N; i++) {
			horde->announce();
		}
		delete []horde;
	}
	else {
		std::cout << "The zombie horde got destroyed before it was created...(error)\n";
	}
	return (0);
}