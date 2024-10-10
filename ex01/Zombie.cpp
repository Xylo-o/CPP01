/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:40:50 by adprzyby          #+#    #+#             */
/*   Updated: 2024/10/10 17:53:57 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : name("") {}

Zombie::Zombie( std::string name ) : name(name) {}

Zombie::~Zombie( void ) {
	std::cout << this->name << ": has been destroyed (*)" << std::endl;
}

void	Zombie::announce( void ) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName( std::string name ) {
	this->name = name;
}