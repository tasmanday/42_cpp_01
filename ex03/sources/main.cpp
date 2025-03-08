/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tday <tday@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 20:10:28 by tday              #+#    #+#             */
/*   Updated: 2025/03/08 22:31:29 by tday             ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"


/* 
	main provided by subject (slightly modified to better demonstrate the
	difference between references and pointers in c++)

	Human A uses a reference to their weapon so the weapon must exist before the
	HumanA object is created and be passed in to the constructor during creation.

	unlike pointers, references cannot be declared without being initialised to
	refer to an existing object. references cannot be null. references cannot be
	reassigned to refer to a different object.

	Human B uses a pointer to their weapon so the weapon doesn't need to exist
	before the HumanB object is created. The weapon can be set later using the
	setWeapon function.
*/
int main() 
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }

    {
        HumanB jim("Jim");
		jim.attack();
		Weapon club = Weapon("crude spiked club");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }

    return 0;
}