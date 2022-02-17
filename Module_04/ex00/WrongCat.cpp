/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 22:29:43 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/10 23:10:45 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <string>
#include <iostream>

WrongCat::WrongCat(void): WrongAnimal() {

	this->type =  "WrongCat";
	std::cout << "New WrongCat created" << std::endl;
	return ;
}

WrongCat::WrongCat(WrongCat const &src): WrongAnimal(src) {

	std::cout << "WrongCat copied" << std::endl;
	return ;
}

WrongCat::~WrongCat(void) {

	std::cout << "WrongCat destroyed" << std::endl;
	return ;
}

WrongCat	&WrongCat::operator=(WrongCat const &rhs) {

	WrongAnimal::operator=(rhs);
	return (*this);
}

void	WrongCat::makeSound(void) const {

	std::cout << "woeM" << std::endl;
}
