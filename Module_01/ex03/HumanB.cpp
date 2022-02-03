/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:13:40 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/02 17:43:32 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name): _name(name), _weapon(NULL) {

	return ;
}

HumanB::~HumanB(void) {

	return ;
}

void	HumanB::attack(void) const {

	if (!this->_weapon)
		std::cout << this->_name << " can't attack without a weapon!" << std::endl;
	else
		std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon &weapon) {

	this->_weapon = &weapon;
	return ;
}
