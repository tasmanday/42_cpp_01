/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tday <tday@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 20:35:16 by tday              #+#    #+#             */
/*   Updated: 2025/03/08 22:31:30 by tday             ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef HUMANA_HPP
#define HUMANA_HPP

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
HumanA Class:
- Represents a human character that always has a weapon
- Uses a reference to ensure the human always has a weapon from creation

Private members:
- name: Stores the human's name as a string
- weapon: Reference to a Weapon object (cannot be null or reassigned)
  Using a reference enforces that HumanA must always have a weapon

Public members:
- Constructor: Takes a name and weapon reference
  Must initialize the weapon reference in the constructor
- Destructor: Handles cleanup when a HumanA object is destroyed
- attack(): Allows the human to attack with their weapon
  Marked as const because it doesn't modify the HumanA object
*/
class HumanA
{
	private:
		std::string name;
		Weapon &weapon;

	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void attack() const;
};

#endif