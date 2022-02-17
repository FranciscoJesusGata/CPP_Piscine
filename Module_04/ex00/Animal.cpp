/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 21:57:15 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/10 23:06:08 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <string>
#include <iostream>

Animal::Animal(void) {

	std::cout << "New Animal created" << std::endl;
	return ;
}

Animal::Animal(Animal const &src) {

	std::cout << "Animal copied" << std::endl;
	*this = src;
	return ;
}

Animal::~Animal(void) {

	std::cout << "Animal destroyed" << std::endl;
	return ;
}

Animal	&Animal::operator=(Animal const &rhs) {

	this->type = rhs.type;
	return (*this);
}

void	Animal::makeSound(void) const {

	return ;
}

std::string	Animal::getType(void) const {

	return (this->type);
}
