/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 12:50:01 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/02 12:59:57 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name): _name(name) {

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
