/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 22:29:43 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/14 14:49:51 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <string>
#include <iostream>

Cat::Cat(void): Animal() {

	this->type =  "Cat";
	std::cout << "New Cat created" << std::endl;
	return ;
}

Cat::Cat(Cat const &src): Animal(src) {

	std::cout << "Cat copied" << std::endl;
	*this = src;
	return ;
}

Cat::~Cat(void) {

	std::cout << "Cat destroyed" << std::endl;
	return ;
}

Cat	&Cat::operator=(Cat const &rhs) {

	Animal::operator=(rhs);
	return (*this);
}

void	Cat::makeSound(void) const {

	std::cout << "Meow" << std::endl;
}
