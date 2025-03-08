/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tday <tday@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 21:58:47 by tday              #+#    #+#             */
/*   Updated: 2025/03/08 22:31:31 by tday             ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

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

/*
HumanB Class:
- Represents a human character that may or may not have a weapon
- Uses a pointer to allow the human to exist without a weapon initially

Private members:
- name: Stores the human's name as a string
- weapon: Pointer to a Weapon object (can be null, can be reassigned)
  Using a pointer allows HumanB to exist without a weapon

Public members:
- Constructor: Takes only a name, no weapon required at creation
- Destructor: Handles cleanup when a HumanB object is destroyed
- setWeapon(): Allows giving a weapon to the human after creation
- attack(): Allows the human to attack with their weapon (if they have one)
  Marked as const because it doesn't modify the HumanB object
*/
class HumanB
{
	private:
		std::string name;
		Weapon *weapon;
	
	public:
		HumanB(std::string name);
		~HumanB();
		void setWeapon(Weapon &weapon);
		void attack() const;
};

#endif