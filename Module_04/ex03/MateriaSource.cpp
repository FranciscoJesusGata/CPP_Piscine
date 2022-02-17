/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:26:42 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/16 20:11:11 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <string>
#include <iostream>

MateriaSource::MateriaSource(void): _capacity(0) {

	for (int i = 0; i < 4; i++)
		this->_known_materias[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource &src) {

	*this = src;
	return ;
}

MateriaSource::~MateriaSource(void) {

	for (int i = 0; i < 4; i++) {
		delete this->_known_materias[i];
	}
	return ;
}

MateriaSource	&MateriaSource::operator=(MateriaSource &rhs) {

	for (int i = 0; i < 4; i++) {
		if (rhs._known_materias[i]) {
			if (this->_known_materias[i])
				this->_known_materias[i] = rhs._known_materias[i]->clone();
		}
	}
	this->_capacity = rhs._capacity;
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *src) {

	if (!src) {
		std::cout << "Error: Can't learn a NULL Materia" << std::endl;
		return ;
	}
	else if (this->_capacity < 4) {
		this->_known_materias[this->_capacity] = src;
		this->_capacity++;
	}
	else
		std::cout << "Can't learn more Materias" << std::endl;
}

AMateria	*MateriaSource::createMateria(std::string const &type) {

	for (int i = 0; i < 4; i++) {
		if (this->_known_materias[i] && this->_known_materias[i]->getType() == type)
			return (this->_known_materias[i]->clone());
	}
	std::cout << "Materia not known" << std::endl;
	return (NULL);
}
