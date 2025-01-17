/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tday <tday@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 18:53:55 by tday              #+#    #+#             */
/*   Updated: 2025/01/17 22:15:36 by tday             ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if (N <= 0) return NULL;

    Zombie* horde = new Zombie[N];
    for (int i = 0; i < N; ++i) {
        std::ostringstream zombieName;
        zombieName << name << "_" << i;
        horde[i].setName(zombieName.str());
    }
    return horde;
}

