/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tday <tday@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 17:11:22 by tday              #+#    #+#             */
/*   Updated: 2024/06/10 15:55:54 by tday             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
	Constructor to initialize the zombie class and set Zombie.name to the value
	of the 'name' variable
*/
Zombie::Zombie(std::string name)
{
	this->name = name;
}

/*
	Destructor that announces when a zombie is destroyed
*/
Zombie::~Zombie()
{
	std::string colour = (name == "HeapZombie") ? BLUE : (name == "StackZombie") ? YELLOW : RESET;
    std::cout << colour << name << RESET << ": was destroyed" << std::endl;
}

/*
	Function for the zombie to announce itself
*/
void Zombie::announce(void)
{
	std::string colour = (name == "HeapZombie") ? BLUE : (name == "StackZombie") ? YELLOW : RESET;
	std::cout << colour << name << RESET << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
