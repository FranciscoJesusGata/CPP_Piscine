/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:07:05 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/11 14:45:00 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <string>
#include <iostream>

DiamondTrap::DiamondTrap(std::string name): ScavTrap(name), FragTrap(name), _name(name) {

	std::cout << "New DiamondTrap " << name << " created" << std::endl;
	this->ClapTrap::_name = name + "_clap_name";
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energypoints = ScavTrap::_energypoints;
	this->_attackdamage = FragTrap::_attackdamage;
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src):ClapTrap(src), ScavTrap(src), FragTrap(src) {

	std::cout << "New DiamondTrap created from " << src._name << std::endl;
	*this = src;
	return ;
}

DiamondTrap::~DiamondTrap(void) {

	std::cout << "DiamondTrap " << this->_name << " has been destroyed" << std::endl;
	return ;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &rhs) {

	ClapTrap::operator=(rhs);
	this->_name = rhs._name;
	return *this;
}

void	DiamondTrap::attack(std::string const &target) {

	ScavTrap::attack(target);
}

void	DiamondTrap::takeDamage(unsigned int amount) {

	ScavTrap::takeDamage(amount);
}

void	DiamondTrap::beRepaired(unsigned int amount) {

	ScavTrap::beRepaired(amount);
}

void	DiamondTrap::whoAmI(void) const {

	std::cout << "The DiamondTrap name is \"" << this->_name;
	std::cout << "\" and the ClapTrap name is \"" << this->ClapTrap::_name << "\"" << std::endl;
}
