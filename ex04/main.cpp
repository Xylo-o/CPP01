/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:02:51 by adprzyby          #+#    #+#             */
/*   Updated: 2024/10/28 14:21:41 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

bool processFile(const std::string filename, const std::string s1, const std::string s2) {
	std::ifstream inputFile(filename);
	if (!inputFile.is_open()) {
		std::cerr << "Error: Could not open the file: " << filename << std::endl;
		return (false);
	}
	std::string content((std::istreambuf_iterator<char>(inputFile)), std::istreambuf_iterator<char>());
	inputFile.close();
	if (s1.empty()) {
		std::cerr << "Error: s1 cannot be empty\n";
		return (false);
	}
	std::string modifiedContent = replaceOccurrences(content, s1, s2);
	std::ofstream outputFile(filename + ".replace");
	if (!outputFile.is_open()) {
		std::cerr << "Error: Could not create the output file!\n";
		return (false);
	}
	outputFile << modifiedContent;
	outputFile.close();
	return (true);
}

std::string replaceOccurrences(const std::string& content, const std::string& s1, const std::string &s2) {
	std::string result;
	size_t pos = 0;
	size_t found_pos;
	while ((found_pos = content.find(s1,pos)) != std::string::npos) {
		result += content.substr(pos, found_pos - pos);
		result += s2;
		pos = found_pos + s1.length();
	}
	result += content.substr(pos);
	return (result);
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