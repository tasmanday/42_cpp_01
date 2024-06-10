/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tday <tday@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:24:23 by tday              #+#    #+#             */
/*   Updated: 2024/06/10 15:39:01 by tday             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    // Create a zombie on the heap and make it announce itself
    Zombie* heapZombie = newZombie("HeapZombie");
    heapZombie->announce();
    // Create a zombie on the stack and make it announce itself
    randomChump("StackZombie");
	// Delete the heap-allocated zombie to free memory
    delete heapZombie;

    return 0;
}