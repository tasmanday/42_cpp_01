/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tday <tday@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 22:11:40 by tday              #+#    #+#             */
/*   Updated: 2025/03/08 22:31:32 by tday             ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

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
Weapon Class:
- Represents a weapon with a specific type (e.g., "crude spiked club")
- Provides methods to get and set the weapon's type

Private members:
- type: Stores the type of the weapon as a string

Public members:
- Constructor: Takes a string to initialize the weapon's type
- Destructor: Handles cleanup when a Weapon object is destroyed
- getType(): Returns a constant reference to the weapon's type
  Uses const reference return to avoid unnecessary copying
  Marked as const because it doesn't modify the Weapon object
- setType(): Allows changing the weapon's type after creation
  Takes a const reference parameter for efficiency
*/
class Weapon
{
	private:
		std::string type;
		
	public:
		Weapon(std::string type);
		~Weapon();
		const std::string &getType() const;
		void setType(const std::string &type);
};

#endif