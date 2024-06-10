/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tday <tday@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 17:11:22 by tday              #+#    #+#             */
/*   Updated: 2024/06/10 19:05:25 by tday             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
	Constructor to initialize the zombie class
*/
Zombie::Zombie() {}

/*
	Destructor that announces when a zombie is destroyed
*/
Zombie::~Zombie()
{
    std::cout << BLUE << name << RESET << ": was destroyed" << std::endl;
}

/*
	Sets Zombie.name to the value of the 'name' variable
*/
void Zombie::setName(std::string name)
{
	this->name = name;
}

/*
	Function for the zombie to announce itself
*/
void Zombie::announce(void)
{
	std::cout << BLUE << name << RESET << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
