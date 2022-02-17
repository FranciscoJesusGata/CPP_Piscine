/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:29:28 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/15 11:29:30 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"
#include <string>
#include <iostream>

WrongCat::WrongCat(void): WrongAnimal() {

	this->type =  "WrongCat";
	std::cout << "New WrongCat created" << std::endl;
	this->brain = new Brain();
	return ;
}

WrongCat::WrongCat(WrongCat const &src): WrongAnimal(src) {

	std::cout << "WrongCat copied" << std::endl;
	*this = src;
	return ;
}

WrongCat::~WrongCat(void) {

	std::cout << "WrongCat destroyed" << std::endl;
	return ;
}

WrongCat	&WrongCat::operator=(WrongCat const &rhs) {

	WrongAnimal::operator=(rhs);
	this->brain = rhs.brain;
	return (*this);
}

void	WrongCat::makeSound(void) const {

	std::cout << "woeM" << std::endl;
}

void	WrongCat::setIdea(std::string idea, size_t pos) {

	this->brain->setIdea(idea, pos);
}

std::string	WrongCat::getIdea(size_t pos) const {

	return (this->brain->getIdea(pos));
}
