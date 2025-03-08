/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tday <tday@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 22:16:34 by tday              #+#    #+#             */
/*   Updated: 2025/03/08 22:31:34 by tday             ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Weapon.hpp"
#include <iostream>

/*
	Constructor for Weapon
	Initializes the weapon's type using the initialization list
	
	inputs:
		type: The type of weapon (e.g., "crude spiked club")
*/
Weapon::Weapon(std::string type) : type(type)
{
	// Body intentionally empty - all initialization done in the member initialization list
}

/*
	Destructor for Weapon
	Prints a message when the weapon is destroyed
	This helps visualize object lifetime during program execution
*/
Weapon::~Weapon()
{
	std::cout << RED << type << RESET << " has been destroyed" << std::endl;
}

/*
	Returns the type of the weapon
	
	returns:
		A constant reference to the weapon's type string
	
	The const after the function name indicates this function
	doesn't modify the Weapon object.
	Returning a reference avoids unnecessary copying of the string.
*/
const std::string &Weapon::getType() const
{
	return (this->type);
}

/*
	Changes the type of the weapon
	
	inputs:
		type: The new type for the weapon
	
	Takes a const reference parameter to avoid unnecessary copying
*/
void Weapon::setType(const std::string &type)
{
	this->type = type;
}