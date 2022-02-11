/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:35:08 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/11 14:51:24 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int		main(void) {

	ClapTrap	illo("El Goku del Sevilla");
	ScavTrap	elPepe("lepepe");
	FragTrap	rcabezas("rcabesa");
	DiamondTrap	cabesa("elpibe");
	DiamondTrap	kdise(cabesa);

	cabesa.attack(illo.getName());
	illo.takeDamage(cabesa.getDamage());
	kdise.attack(cabesa.getName());
	cabesa.takeDamage(kdise.getDamage());
	elPepe.attack(rcabezas.getName());
	rcabezas.takeDamage(elPepe.getDamage());
	rcabezas.beRepaired(20);
	rcabezas.attack(elPepe.getName());
	elPepe.takeDamage(rcabezas.getDamage());
	elPepe.guardGate();
	rcabezas.highFiveGuys();
	kdise.guardGate();
	cabesa.highFiveGuys();
	kdise.whoAmI();
	cabesa.whoAmI();
	return 0;
}
