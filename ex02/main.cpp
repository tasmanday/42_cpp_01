/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tday <tday@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 22:34:19 by tday              #+#    #+#             */
/*   Updated: 2025/01/18 00:08:24 by tday             ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <iostream>
#include <string>

/* colours */
# define RESET	"\033[0m"
# define GRAY	"\033[1;30m"
# define RED	"\033[1;31m"
# define GREEN	"\033[1;32m"
# define YELLOW	"\033[1;33m"
# define BLUE	"\033[1;34m"
# define MGNTA	"\033[1;35m"
# define CYAN	"\033[1;36m"
# define WHITE	"\033[1;37m"

int main()
{
	// Create a string
	std::string str = "HI THIS IS BRAIN";

	// Create a pointer to the string
	std::string* stringPTR = &str;

	// Create a reference to the string
	std::string& stringREF = str;

	// Print the memory address of the string variable
	std::cout << BLUE << "Memory address of string variable: " RESET << &str << std::endl;

	// Print the memory address of the stringPTR
	std::cout << BLUE << "Memory address of string pointer: " RESET << stringPTR << std::endl;

	// Print the memory address of the stringREF
	std::cout << BLUE << "Memory address of string reference: " RESET << &stringREF << std::endl;

	// Print the value of the string variable
	std::cout << CYAN << "Value of the string variable: " RESET << str << std::endl;

	// Print the value pointed to by  stringPTR
	std::cout << CYAN << "Value pointed to stringPTR: " RESET << *stringPTR << std::endl;

	// Print the value pointed to by stringREF
	std::cout << CYAN << "Value pointed to by stringREF: " RESET << stringREF << std::endl;

	return (0);
}