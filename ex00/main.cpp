/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:12:12 by adprzyby          #+#    #+#             */
/*   Updated: 2024/10/10 17:02:19 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main ( void ) {
 	std::cout << "Creating a zombie on the stack:\n" << std::endl;
    randomChump("StackZombie");
	std::cout << std::endl << std::endl;
	std::cout << "Creating a zombie on the heap:\n" << std::endl;
    Zombie* heapZombie = newZombie("HeapZombie");
    heapZombie->announce();
    delete heapZombie;	
	
	return (0);
}