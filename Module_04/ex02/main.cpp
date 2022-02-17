/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 22:48:22 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/15 12:31:43 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>
#include <stdlib.h>

int main(void) {

	std::cout << "Basic tests: " << std::endl << std::endl;
	Dog	*toto = new Dog();
	Dog	*slinky = new Dog(*toto);
	Cat	*grumpy = new Cat();
	Cat	*felix = new Cat(*grumpy);

	std::cout << "This animal is a: " << toto->getType()<< std::endl;
	std::cout << "This animal is a: " << grumpy->getType() << std::endl;
	slinky->makeSound(); //will output the cat sound!
	felix->makeSound();
	toto->setIdea("Parque", 42);
	slinky->setIdea("Estirarse", 42);
	std::cout << "Toto is thingking about: " << toto->getIdea(42) << std::endl;
	std::cout << "Slinky is thinking about: " << slinky->getIdea(42) << std::endl;
	grumpy->setIdea("Salmón", 0);
	felix->setIdea("Dormir", 0);
	std::cout << "Grumpy is thingking about: " << grumpy->getIdea(0) << std::endl;
	std::cout << "Felix is thinking about: " << felix->getIdea(0) << std::endl;
	delete toto;
	delete slinky;
	delete grumpy;
	delete felix;

	int		quantity = 6;
	Animal	*meta[quantity];

	std::cout << std::endl << "Leaks test: " << std::endl << std::endl;
	for (int i = 0; i < quantity; i++) {
		if (i < quantity / 2)
			meta[i] = new Dog();
		else
			meta[i] = new Cat();
	}
	std::cout << "First animal type: " << meta[0]->getType() << std::endl;
	meta[0]->makeSound();
	std::cout << "Last animal type: " << meta[quantity - 1]->getType() << std::endl;
	meta[quantity - 1]->makeSound();
	for (int i = 0; i < quantity; i++) {
		delete meta[i];
	}

	//Will throw error
	/*const Animal	*meta = new Animal();

	meta->makeSound();
	std::cout << "This animal is a: "<< meta->getType() << std::endl;*/

}
