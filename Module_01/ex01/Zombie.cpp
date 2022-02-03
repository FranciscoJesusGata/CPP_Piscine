/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 12:50:01 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/02 15:12:34 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void): _name("Zombie") {

	return ;
}

Zombie::~Zombie(void) {

	std::cout << this->_name << " is dead at once" << std::endl;
	return ;
}

void	Zombie::announce(void) const {

	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void	Zombie::setName(std::string name) {

	this->_name = name;
	return ;
}
