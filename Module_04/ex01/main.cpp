/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 22:48:22 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/16 17:50:07 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>
#include <stdlib.h>

int main(void) {

	int		quantity = 10;
	Animal	*meta[quantity];

	std::cout << "Leaks test: " << std::endl << std::endl;
	for (int i = 0; i < quantity; i++) {
		if (i < quantity / 2)
			meta[i] = new Dog();
		else
			meta[i] = new Cat();
	}
	meta[0]->makeSound();
	meta[quantity - 1]->makeSound();
	std::cout << "First animal type: " << meta[0]->getType() << std::endl;
	std::cout << "Last animal type: " << meta[quantity - 1]->getType() << std::endl;
	for (int i = 0; i < quantity; i++) {
		delete meta[i];
	}

	std::cout << std::endl << "Deep copy tests: " << std::endl << std::endl;

	Dog			toby;
	Dog			pluto = toby;
	Cat			isidoro;
	Cat			silvestre = isidoro;
	

	toby.setIdea("Huesos", 0);
	pluto.setIdea("Salchichas", 0);
	std::cout << "Toby is thingking about: " << toby.getIdea(0) << std::endl;
	std::cout << "Pluto is thinking about: " << pluto.getIdea(0) << std::endl;
	isidoro.setIdea("Atún", 0);
	silvestre.setIdea("Obillo de lana", 0);
	std::cout << "Isidoro is thingking about: " << isidoro.getIdea(0) << std::endl;
	std::cout << "Silvestre is thinking about: " << silvestre.getIdea(0) << std::endl;

	//Will leak memory on purpose
	/*std::cout << std::endl << "Shadow copy test: " << std::endl << std::endl;

	WrongCat	garfield;
	WrongCat	kat = garfield;

	garfield.setIdea("Atún", 0);
	kat.setIdea("Obillo de lana", 0);
	std::cout << "Garfield is thingking about: " << garfield.getIdea(0) << std::endl;
	std::cout << "Kat is thinking about: " << kat.getIdea(0) << std::endl << std::endl;*/
}
