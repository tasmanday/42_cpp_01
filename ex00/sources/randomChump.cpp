/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tday <tday@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 14:58:41 by tday              #+#    #+#             */
/*   Updated: 2024/06/10 15:23:38 by tday             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
	Creates a zombie on the stack, names it, and makes it announce itself

	The stack-allocated Zombie object does not require manual deletion.
	It is automatically destroyed when the function returns.
*/
void randomChump(std::string name)
{
    Zombie zombie(name);
    zombie.announce();
}
