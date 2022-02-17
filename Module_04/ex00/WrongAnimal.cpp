/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 21:57:15 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/10 23:28:11 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <string>
#include <iostream>

WrongAnimal::WrongAnimal(void) {

	std::cout << "New WrongAnimal created" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src) {

	std::cout << "WrongAnimal copied" << std::endl;
	*this = src;
	return ;
}

WrongAnimal::~WrongAnimal(void) {

	std::cout << "WrongAnimal destroyed" << std::endl;
	return ;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &rhs) {

	this->type = rhs.type;
	return (*this);
}

void	WrongAnimal::makeSound(void) const {

	std::cout << "* SOME UNDEFINED SOUND *" << std::endl;
	return ;
}

std::string	WrongAnimal::getType(void) const {

	return (this->type);
}
