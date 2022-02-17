/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 22:29:43 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/15 11:05:55 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <string>
#include <iostream>

Cat::Cat(void): Animal() {

	this->type =  "Cat";
	std::cout << "New Cat created" << std::endl;
	this->brain = new Brain();
	return ;
}

Cat::Cat(Cat const &src): Animal(src) {

	std::cout << "Cat copied" << std::endl;
	*this = src;
	return ;
}

Cat::~Cat(void) {

	std::cout << "Cat destroyed" << std::endl;
	delete this->brain;
	return ;
}

Cat	&Cat::operator=(Cat const &rhs) {

	Animal::operator=(rhs);
	this->brain = new Brain(*rhs.brain);
	return (*this);
}

void	Cat::makeSound(void) const {

	std::cout << "Meow" << std::endl;
}

void	Cat::setIdea(std::string idea, size_t pos) {

	this->brain->setIdea(idea, pos);
}

std::string	Cat::getIdea(size_t pos) const {

	return (this->brain->getIdea(pos));
}

