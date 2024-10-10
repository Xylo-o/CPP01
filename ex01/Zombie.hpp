/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:40:54 by adprzyby          #+#    #+#             */
/*   Updated: 2024/10/10 17:54:11 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class Zombie {
	public:
		Zombie();
		Zombie( std::string name );
		~Zombie( void );
		void announce( void );
		void setName(std::string name);
	private:
		std::string name;	
};

Zombie *zombieHorde( int N, std::string name );