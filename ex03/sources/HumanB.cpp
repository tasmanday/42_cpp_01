/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tday <tday@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 22:03:15 by tday              #+#    #+#             */
/*   Updated: 2025/03/08 22:31:31 by tday             ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "HumanB.hpp"
#include <iostream>

/*
	Constructor for HumanB
	Initializes name with the provided value and weapon pointer to NULL
	
	inputs:
		name: The name of the human
	
	Unlike HumanA, HumanB can be created without a weapon as it uses a pointer
	instead of a reference
*/
HumanB::HumanB(std::string name) : name(name), weapon(NULL)
{
	// Body intentionally empty - all initialization done in the member initialization list
}

/*
	Destructor for HumanB
	No dynamic memory to clean up, just prints a message
 */
HumanB::~HumanB()
{
    std::cout << RED << name << RESET << " has been destroyed" << std::endl;
}

/*
	Sets the weapon for this human
	Takes a reference to a Weapon and stores its address
	
	inputs:
		weapon: Reference to the weapon to be used
	
	This allows giving a weapon to HumanB after creation

	Note: A reference is used here instead of a pointer to:
	1. Ensure a valid weapon is provided (references can't be null)
	2. Allow us to store the address of the original weapon
	3. Avoid unnecessary copying of the Weapon object
*/
void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

/*
	Attack function for HumanB
	Checks if the human has a weapon before attacking
	If they have a weapon, outputs an attack message
	If not, outputs a message saying they can't attack
	
	Marked as const because it doesn't modify the HumanB object
*/
void HumanB::attack() const
{
	if (weapon)
	{
		std::cout << BLUE << name << RESET << " attacks with their " << WHITE <<
		weapon->getType() << RESET << std::endl;
	}
	else
	{
		std::cout << BLUE << name << RESET << " has no weapon so they can't attack!" << std::endl;
	}
}