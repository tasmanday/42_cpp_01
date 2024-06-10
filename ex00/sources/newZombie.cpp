/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tday <tday@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 14:34:57 by tday              #+#    #+#             */
/*   Updated: 2024/06/10 14:54:07 by tday             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
	Creates a new zombie on the heap, names it, and returns a pointer to it.

	'new' is similar to malloc, it allocates dynamic memory on the heap that 
	would then need to be freed with 'delete'.
*/
Zombie* newZombie(std::string name)
{
    return new Zombie(name);
}