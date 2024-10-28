/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:23:06 by adprzyby          #+#    #+#             */
/*   Updated: 2024/10/28 17:55:28 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int argc, char *argv[]) {
	if (argc != 2) {
		std::cout << "Wrong usage! Correct usage: \n" << "./harlFilter *compliant type*\n";
		return (1);
	}
	Harl harl;
	std::string input = argv[1];
	harl.complain(input);
	return (0);
}