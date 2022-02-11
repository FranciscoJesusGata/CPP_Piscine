/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:37:06 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/11 16:09:14 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

ClapTrap::ClapTrap(std::string name): _name(name), _hitpoints(10), _energypoints(10), _attackdamage(0) {

	std::cout << "New ClapTrap " << name << " created" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &src) {

	*this = src;
	std::cout << "New ClapTrap created from " << src._name << std::endl;
	return ;
}

ClapTrap::~ClapTrap(void) {

	std::cout << "ClapTrap " << this->_name << " has been destroyed" << std::endl;
	return ;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &rhs) {

	if (this != &rhs) {
		this->_name = rhs._name;
		this->_hitpoints = rhs._hitpoints;
		this->_energypoints = rhs._energypoints;
		this->_attackdamage = rhs._attackdamage;
	}
	return (*this);
}

std::string	ClapTrap::getName(void) const {

	return (this->_name);
}

unsigned int	ClapTrap::getDamage(void) const {

	return (this->_attackdamage);
}

void			ClapTrap::setDamage(unsigned int damage) {

	this->_attackdamage = damage;
}

unsigned int	ClapTrap::getHitPoints(void) const {

	return (this->_hitpoints);
}

void	ClapTrap::attack(std::string const &target) {

	std::cout << "ClapTrap " << this->_name << " attack " << target;
	std::cout << ", causing " << this->_attackdamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {

	std::cout << "Ouch! ClapTrap " << this->_name << " has received ";
	std::cout << amount << " points of damage" << std::endl;
	if (this->_hitpoints < amount)
		this->_hitpoints = 0;
	else
		this->_hitpoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount) {

	if (amount > this->_energypoints)
		std::cout << "There's not enought energy to repair " << amount << " hit points" << std::endl;
	else {
		std::cout << "ClapTrap " << this->_name << " has repaired " << amount << " hit points" << std::endl;
		this->_hitpoints += amount;
		this->_energypoints -= amount;
	}
}
