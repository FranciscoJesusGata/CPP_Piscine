/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:07:05 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/11 14:46:48 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <string>
#include <iostream>

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {

	std::cout << "New ScavTrap " << name << " created" << std::endl;
	this->_hitpoints = 100;
	this->_energypoints = 50;
	this->_attackdamage = 20;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &src): ClapTrap(src){

	std::cout << "New ScavTrap created from " << src._name << std::endl;
	*this = src;
	return ;
}

ScavTrap::~ScavTrap(void) {

	std::cout << "ScavTrap " << this->_name << " has been destroyed" << std::endl;
	return ;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &rhs) {

	ClapTrap::operator=(rhs);
	return *this;
}

void		ScavTrap::guardGate(void) const {

	std::cout << "ScavTrap " << this->_name << " has enterred in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(std::string const &target) {

	std::cout << "ScavTrap " << this->_name << " attack " << target;
	std::cout << ", causing " << this->_attackdamage << " points of damage!" << std::endl;
}

