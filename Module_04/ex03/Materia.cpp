/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:53:08 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/16 15:20:48 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materia.hpp"
#include <iostream>

AMateria::AMateria(std::string const &type): _type(type) {

	return ;
}

AMateria::~AMateria(void) {

	return ;
}

void	AMateria::use(ICharacter &target) {

	std::cout << "*" << target.getName() << " is melting*" << std::endl;
	return ;
}

std::string const	&AMateria::getType(void) const {

	return (this->_type);
}

/*********************************************
 *               Ice Functions               *
 *********************************************/

Ice::Ice(void): AMateria("ice") {

	return ;
}

Ice::~Ice(void) {

	return ;
}

Ice::Ice(Ice const &src): AMateria("ice") {

	*this = src;
	return ;
}

Ice		&Ice::operator=(Ice const &rhs) {

	if (&rhs != this)
		this->_type = rhs.getType();
	return (*this);
}

void	Ice::use(ICharacter &target) {

	std::cout << "*shoots an ice bolt at " << target.getName() << "*" << std::endl;
}

Ice		*Ice::clone(void) const {

	return (new Ice());
}

/*********************************************
 *               Cure Functions               *
 *********************************************/

Cure::Cure(void): AMateria("cure") {

	return ;
}

Cure::~Cure(void) {

	return ;
}

Cure::Cure(Cure const &src): AMateria("cure") {

	*this = src;
	return ;
}

Cure		&Cure::operator=(Cure const &rhs) {

	if (&rhs != this)
		this->_type = rhs.getType();
	return (*this);
}

void	Cure::use(ICharacter &target) {

	std::cout << "*heals " << target.getName() << "'s wounds*" << std::endl;
}

Cure		*Cure::clone(void) const {

	return (new Cure());
}
