/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tday <tday@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 21:36:14 by tday              #+#    #+#             */
/*   Updated: 2025/03/08 22:31:30 by tday             ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "HumanA.hpp"
#include <iostream>

/*
	Constructor for HumanA
	Initializes both name and weapon reference using initialization list

	inputs:
		name: The name of the human
		weapon: Reference to a weapon (must exist, cannot be null)
 */
HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
    // Body intentionally empty - all initialization done in the member initialization list
}

/*
	Destructor for HumanA
	No dynamic memory to clean up, just prints a message
 */
HumanA::~HumanA()
{
    std::cout << RED << name << RESET << " has been destroyed" << std::endl;
}

/*
	Attack function for HumanA
	Outputs a message showing the human's name and their weapon type
	Uses color formatting for better readability
	Marked as const because it doesn't modify the HumanA object
 */
void HumanA::attack() const
{
    std::cout << BLUE << name << RESET << " attacks with their " << WHITE <<
    weapon.getType() << RESET << std::endl;
}