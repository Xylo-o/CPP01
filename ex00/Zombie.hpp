/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:11:50 by adprzyby          #+#    #+#             */
/*   Updated: 2024/10/10 17:52:09 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class Zombie {
	public:
		Zombie( std::string name );
		~Zombie( void );
		void announce( void );
	private:
		std::string name;	
};

Zombie *newZombie( std::string name );
void	randomChump( std::string name );