/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:33:58 by adprzyby          #+#    #+#             */
/*   Updated: 2024/10/14 15:03:11 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string BLUE = "\033[34m";
const std::string MAGENTA = "\033[35m";
const std::string RESET = "\033[0m";

int main() {
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;
    
    std::cout << GREEN << "Memory address of str: " << RESET << YELLOW << &str << RESET << std::endl;
    std::cout << GREEN << "Memory address held by stringPTR: " << RESET << YELLOW << stringPTR << RESET << std::endl;
    std::cout << GREEN << "Memory address held by stringREF: " << RESET << YELLOW << &stringREF << RESET << std::endl;
    
    std::cout << GREEN << "Value of str: " << RESET << MAGENTA << str << RESET << std::endl;
    std::cout << GREEN << "Value pointed to by stringPTR: " << RESET << MAGENTA << *stringPTR << RESET << std::endl;
    std::cout << GREEN << "Value pointed to by stringREF: " << RESET << MAGENTA << stringREF << RESET << std::endl;
    
    return 0;
}