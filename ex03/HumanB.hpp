/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:05:57 by adprzyby          #+#    #+#             */
/*   Updated: 2024/10/14 17:56:03 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {
	public:
		HumanB( std::string name);
		void setWeapon(Weapon& weapon);
		void attack() const;
	private:
		Weapon* weapon;
		std::string name;	
};