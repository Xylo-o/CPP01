/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:06:03 by adprzyby          #+#    #+#             */
/*   Updated: 2024/10/14 17:37:34 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type) : type(type) {}

void Weapon::setType(const std::string& type ) {
	this->type = type;
}

std::string Weapon::getType() const {
	return type;
}