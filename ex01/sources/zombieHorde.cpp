/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tday <tday@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 18:53:55 by tday              #+#    #+#             */
/*   Updated: 2024/06/10 19:05:24 by tday             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if (N <= 0) return nullptr;

    Zombie* horde = new Zombie[N];
    for (int i = 0; i < N; ++i) {
        std::ostringstream zombieName;
        zombieName << name << "_" << i;
        horde[i].setName(zombieName.str());
    }
    return horde;
}

