/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:46:59 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/02 15:23:07 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(void) {

	Zombie	*horde;
	int		number_of_zombies = 20;

	horde = ZombieHorde(number_of_zombies, "Tank");
	for (int i = 0; i < number_of_zombies; i++) {
		std::cout << "Zombie " << i + 1 << ": ";
		horde[i].announce();
	}
	delete [] horde;
}
