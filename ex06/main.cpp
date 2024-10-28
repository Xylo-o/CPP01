/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:23:06 by adprzyby          #+#    #+#             */
/*   Updated: 2024/10/28 17:24:39 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main () {
	Harl harl;
	std::string input;
	std::cout << "Enter complaint: \n";
	std::cin >> input;
	harl.complain(input);
	return (0);
}