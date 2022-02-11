/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 14:14:12 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/09 19:23:18 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int		main(void) {

	ClapTrap	gokuBetis("Goku del Betis");
	ClapTrap	eteSech("eeteSeech");
	ClapTrap	otroGoku(gokuBetis);

	otroGoku.setDamage(10);
	eteSech.attack(gokuBetis.getName());
	gokuBetis.takeDamage(eteSech.getDamage());
	gokuBetis.beRepaired(5);
	otroGoku.attack(eteSech.getName());
	eteSech.takeDamage(otroGoku.getDamage());
	return 0;
}
