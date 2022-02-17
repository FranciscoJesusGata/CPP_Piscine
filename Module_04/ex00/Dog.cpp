/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 22:29:43 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/14 14:50:06 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <string>
#include <iostream>

Dog::Dog(void): Animal() {

	this->type = "Dog";
	std::cout << "New Dog created" << std::endl;
	return ;
}

Dog::Dog(Dog const &src): Animal(src) {

	std::cout << "Dog copied" << std::endl;
	*this = src;
	return ;
}

Dog::~Dog(void) {

	std::cout << "Dog destroyed" << std::endl;
	return ;
}

Dog	&Dog::operator=(Dog const &rhs) {

	Animal::operator=(rhs);
	return (*this);
}

void	Dog::makeSound(void) const {

	std::cout << "Woof!" << std::endl;
}
