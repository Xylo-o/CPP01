/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:02:51 by adprzyby          #+#    #+#             */
/*   Updated: 2024/10/16 17:00:36 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

bool processFile(const std::string filename, const std::string s1, const std::string s2) {
	std::ifstream inputFile(filename);
	if (!inputFile.is_open()) {
		std::cerr << "Error: Could not open the file: " << filename << std::endl;
		return (false);
	}
	std::string content(std::istreambuf_iterator<char>(inputFile), std::istreambuf_iterator<char>());
	inputFile.close();
	if (s1.empty()) {
		std::cerr << "Error: s1 cannot be empty\n";
		return (false);
	}
	return (true);
}

int main (int argc, char* argv[]) {
	if (argc != 4) {
		std::cerr << "Correct usage: ./sed <filename> <s1> <s2>\n";
		return (1);
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (!processFile(filename, s1, s2)) {
		return (1);
	}
	std::cout << "The file has been replaced successfully. New file name: " << filename << ".replace\n";
	return (0);
}