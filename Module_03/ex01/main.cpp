/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:35:08 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/10 17:24:10 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int		main(void) {

	ClapTrap	elqrro("Currito Kanaya");
	ScavTrap	caballoJuan("Juan Caballo");
	ScavTrap	pablito("elpablo");
	ScavTrap	caballoJoao(caballoJuan);

	caballoJuan.attack(pablito.getName());
	pablito.takeDamage(caballoJuan.getDamage());
	pablito.beRepaired(20);
	caballoJoao.guardGate();
	pablito.attack(caballoJoao.getName());
	caballoJoao.takeDamage(pablito.getDamage());
	elqrro.attack(pablito.getName());
	pablito.takeDamage(elqrro.getDamage());
	return 0;
}
