/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:36:36 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/16 20:12:09 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <string>
#include <iostream>

Character::Character(std::string name): _name(name) {

	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	return ;
}

Character::Character(Character const &rhs) {

	*this = rhs;
	return ;
}

Character::~Character(void) {

	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
	return ;
}

Character	&Character::operator=(Character const &rhs) {

	this->_name = rhs._name;
	for (int i = 0; i < 4; i++)
		if (rhs._inventory[i])
			this->_inventory[i] = rhs._inventory[i]->clone();
	return (*this);
}

std::string const	&Character::getName(void) const {

	return (this->_name);
}

void	Character::equip(AMateria *m) {

	if (!m) {
		std::cout << "Error: Can't equip a NULL Materia" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++) {
		if (!this->_inventory[i]) {
			this->_inventory[i] = m;
			//std::cout << "Materia " << m->getType() << " equiped in slot " << i << std::endl;
			return ;
		}
	}
	std::cout << "Inventory full, could't equip " << m->getType() << std::endl;
}

void	Character::unequip(int idx) {

	if (idx < 0 || idx > 3)
		std::cout << "Error: invalid id. The availabe slots goes from 0 to 3" << std::endl;
	else if (!this->_inventory[idx])
		std::cout << "That Inventory slot is empty, could't unequip Materia" << std::endl;
	else
		this->_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target) {

	if (idx < 0 || idx > 3)
		std::cout << "Error: invalid id. The availabe slots goes from 0 to 3" << std::endl;
	else if (!this->_inventory[idx])
		std::cout << "That Inventory slot is empty, can't use Materia" << std::endl;
	else {
		this->_inventory[idx]->use(target);
	}
}

