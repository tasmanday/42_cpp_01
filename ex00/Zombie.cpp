/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tday <tday@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 17:11:22 by tday              #+#    #+#             */
/*   Updated: 2024/06/08 17:25:03 by tday             ###   ########.fr       */
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
    std::cout << name << " is destroyed" << std::endl;
}

/*
	Function for the zombie to announce itself
*/
void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
