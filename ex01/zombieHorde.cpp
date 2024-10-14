/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:40:57 by adprzyby          #+#    #+#             */
/*   Updated: 2024/10/14 14:15:27 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde( int N,std::string name ) {
	if (N <= 0)
		return nullptr;
	Zombie *horde = new Zombie[N];
	for(int i = 0; i < N; i++) {
		horde[i].setName(name);
	}
	return (horde);
}