/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 12:49:00 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/16 20:15:07 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"
#include <iostream>

int main(void) {

	/****************************************
	 *                                      *
	 *            Subject tests             *
	 *                                      *
	 ****************************************/

	std::cout << "Subject tests" << std::endl << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	/****************************************
	 *                                      *
	 *              More tests              *
	 *                                      *
	 ****************************************/


	std::cout << std::endl << "More tests" << std::endl << std::endl;
	MateriaSource knowledge;
	Character qrro("Qrro");

	AMateria* materia;
	materia = knowledge.createMateria("ice");
	qrro.equip(materia);
	qrro.unequip(0);

	MateriaSource sapience = knowledge;
	knowledge.learnMateria(new Ice);
	sapience.learnMateria(new Cure);
	materia = knowledge.createMateria("cure");
	materia = sapience.createMateria("ice");

	materia = knowledge.createMateria("ice");
	qrro.equip(materia);

	Character elpablo = qrro;

	materia = knowledge.createMateria("cure");
	qrro.equip(materia);

	elpablo.use(1, qrro);
	qrro.use(0, elpablo);
	elpablo.use(0, qrro);
	qrro.use(1, qrro);
	qrro.unequip(1);
	//Should raise an error
	/*Ice ice;
	Cure cure;
	ice = cure;*/
	delete materia;
	return 0;
}
