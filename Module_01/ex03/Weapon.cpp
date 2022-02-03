/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:52:06 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/02 15:55:35 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type) {

	return ;
}

Weapon::~Weapon(void) {

	return ;
}

std::string const	&Weapon::getType() {

	return (_type);
}

void	Weapon::setType(std::string type) {

	this->_type = type;
	return ;
}
