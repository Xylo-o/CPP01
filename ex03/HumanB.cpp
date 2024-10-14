/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:05:54 by adprzyby          #+#    #+#             */
/*   Updated: 2024/10/14 17:57:16 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : name(name), weapon(nullptr) {}

void HumanB::setWeapon(Weapon& weapon) {
	this->weapon = &weapon;
}

void HumanB::attack() const {
	if (this->weapon) {
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	}
	else {
		std::cout << this->name << " has no weapon to attack with! " << std::endl;
	}
}