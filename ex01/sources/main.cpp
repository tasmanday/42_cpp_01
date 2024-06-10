/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tday <tday@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:24:23 by tday              #+#    #+#             */
/*   Updated: 2024/06/10 19:05:22 by tday             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int N;
	std::cout << "Enter the number of zombies: ";
    std::cin >> N;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear the input buffer

    std::string name = "Zombie";

    Zombie* horde = zombieHorde(N, name);

    if (horde != nullptr)
	{
        for (int i = 0; i < N; ++i)
            horde[i].announce();

        delete[] horde;
    }

    return 0;
}