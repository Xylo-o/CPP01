/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:02:48 by adprzyby          #+#    #+#             */
/*   Updated: 2024/10/28 14:22:22 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <fstream>

std::string replaceOccurrences(const std::string& content, const std::string& s1, const std::string &s2);
bool processFile(const std::string filename, const std::string s1, const std::string s2);