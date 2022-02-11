/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:07:05 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/11 14:47:07 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <string>
#include <iostream>

FragTrap::FragTrap(std::string name): ClapTrap(name) {

	std::cout << "New FragTrap " << name << " created" << std::endl;
	this->_hitpoints = 100;
	this->_energypoints = 100;
	this->_attackdamage = 30;
	return ;
}

FragTrap::FragTrap(const FragTrap &src): ClapTrap(src){

	std::cout << "New FragTrap created from " << src._name << std::endl;
	*this = src;
	return ;
}

FragTrap::~FragTrap(void) {

	std::cout << "FragTrap " << this->_name << " has been destroyed" << std::endl;
	return ;
}

FragTrap	&FragTrap::operator=(const FragTrap &rhs) {

	ClapTrap::operator=(rhs);
	return *this;
}

void	FragTrap::highFiveGuys (void) const {

	std::cout << "FragTrap " << this->_name << " wants to High Five with you" << std::endl;
}

void	FragTrap::attack(std::string const &target) {

	std::cout << "FragTrap  " << this->_name << " attack " << target;
	std::cout << ", causing " << this->_attackdamage << " points of damage!" << std::endl;
}

