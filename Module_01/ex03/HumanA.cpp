/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:11:50 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/02 17:34:24 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon) {

	return ;
}

HumanA::~HumanA(void) {

	return ;
}

void	HumanA::attack(void) const {

	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
	return ;
}
