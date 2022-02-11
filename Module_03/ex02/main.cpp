/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:35:08 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/10 17:33:32 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int		main(void) {

	ClapTrap	illoJoan("Juanito el Golondrina");
	ScavTrap	elPepe("lepepe");
	FragTrap	rcabezas("rcabesa");
	FragTrap	rheads(rcabezas);

	illoJoan.attack(rheads.getName());
	rheads.takeDamage(illoJoan.getDamage());
	elPepe.attack(rcabezas.getName());
	rcabezas.takeDamage(elPepe.getDamage());
	rcabezas.beRepaired(20);
	rcabezas.attack(elPepe.getName());
	elPepe.takeDamage(rcabezas.getDamage());
	elPepe.guardGate();
	rcabezas.highFiveGuys();
	rheads.attack(rcabezas.getName());
	rcabezas.takeDamage(rheads.getDamage());
	return 0;
}
