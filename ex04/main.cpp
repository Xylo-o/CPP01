/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:02:51 by adprzyby          #+#    #+#             */
/*   Updated: 2024/10/15 13:33:53 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"



int main (int argc, char* argv[]) {
	if (argc != 4) {
		std::cerr << "Correct usage: ./sed <filename> <s1> <s2>\n";
		return (1);
	}
	
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	
	return (0);
}