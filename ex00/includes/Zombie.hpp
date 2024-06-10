/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tday <tday@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 17:11:33 by tday              #+#    #+#             */
/*   Updated: 2024/06/10 15:56:21 by tday             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>	// std::cout, std::endl
#include <string>	// std::string

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

/* Zombie class declaration */
class Zombie
{
	private:
		std::string name; // Name of the zombie
	public:
		Zombie(std::string name);	// Constructor that takes the name of the zombie
		~Zombie();					// Destructor that announces when a zombie is destroyed
		void announce();			// Function for the zombie to announce itself
};

/* Function declarations */
Zombie* newZombie(std::string name);	// Creates a new zombie on the heap
void randomChump(std::string name);		// Creates a zombie on the stack

#endif