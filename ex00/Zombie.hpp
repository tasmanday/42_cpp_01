/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tday <tday@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 17:11:33 by tday              #+#    #+#             */
/*   Updated: 2024/06/08 17:25:59 by tday             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>	// std::cout, std::endl
#include <string>	// std::string

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

// Function declarations
Zombie* newZombie(std::string name);	// Creates a new zombie on the heap
void randomChump(std::string name);		// Creates a zombie on the stack

#endif