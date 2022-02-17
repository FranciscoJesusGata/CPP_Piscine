/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 22:29:43 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/15 11:04:30 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <string>
#include <iostream>

Dog::Dog(void): Animal() {

	this->type = "Dog";
	std::cout << "New Dog created" << std::endl;
	this->brain = new Brain();
	return ;
}

Dog::Dog(Dog const &src): Animal(src) {

	std::cout << "Dog copied" << std::endl;
	*this = src;
	return ;
}

Dog::~Dog(void) {

	std::cout << "Dog destroyed" << std::endl;
	delete this->brain;
	return ;
}

Dog	&Dog::operator=(Dog const &rhs) {

	Animal::operator=(rhs);
	this->brain = new Brain(*rhs.brain);
	return (*this);
}

void	Dog::makeSound(void) const {

	std::cout << "Woof!" << std::endl;
}

void	Dog::setIdea(std::string idea, size_t pos) {

	this->brain->setIdea(idea, pos);
}

std::string	Dog::getIdea(size_t pos) const {

	return (this->brain->getIdea(pos));
}
