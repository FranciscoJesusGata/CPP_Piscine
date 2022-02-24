/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:50:13 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/21 14:37:07 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int	main(void) {

	std::cout << "Basic Tests:" << std::endl << std::endl;
	Form	*arbolito = new ShrubberyCreationForm("Casa");
	std::cout << *arbolito << std::endl;
	Bureaucrat	josele("josele", 137);
	std::cout << josele << std::endl;
	josele.signForm(*arbolito);
	josele.executeForm(*arbolito);
	std::cout << std::endl;

	Form	*cirugia = new RobotomyRequestForm("Curro");
	std::cout << *cirugia << std::endl;
	Bureaucrat	juanchu("juanchu", 45);
	std::cout << juanchu << std::endl;
	juanchu.signForm(*cirugia);
	for (int i = 0; i < 10; i++) {
		juanchu.executeForm(*cirugia);
	}
	std::cout << std::endl;

	Form	*meperd0nas = new PresidentialPardonForm("Pakito");
	std::cout << *meperd0nas << std::endl;
	Bureaucrat	joseju("joseju", 137);
	std::cout << joseju << std::endl;
	joseju.signForm(*meperd0nas);
	joseju.executeForm(*meperd0nas);
	std::cout << std::endl;

	delete arbolito;
	delete cirugia;
	delete meperd0nas;

	std::cout << std::endl << "Error handling tests:" << std::endl;
	ShrubberyCreationForm arbustito("Plaza de España");
	Bureaucrat joserra("joserra", 146);
	std::cout << joserra << std::endl;
	joserra.signForm(arbustito);
	joserra.incrementGrade();
	joserra.signForm(arbustito);
	joserra.executeForm(arbustito);
	for (int i = 0; i < 8; i++)
		joserra.incrementGrade();
	joserra.executeForm(arbustito);

	RobotomyRequestForm transcendence("fgata-va");
	Bureaucrat juanjo("juanjo", 73);
	std::cout << juanjo << std::endl;
	juanjo.signForm(transcendence);
	juanjo.incrementGrade();
	juanjo.signForm(transcendence);
	juanjo.executeForm(transcendence);
	for (int i = 0; i < 27; i++)
		juanjo.incrementGrade();
	juanjo.executeForm(transcendence);

	PresidentialPardonForm perdon_divino("fportalo");
	Bureaucrat joaquin("joaquín", 26);
	std::cout << joaquin << std::endl;
	joaquin.signForm(perdon_divino);
	joaquin.incrementGrade();
	joaquin.signForm(perdon_divino);
	joaquin.executeForm(perdon_divino);
	for (int i = 0; i < 20; i++)
		joaquin.incrementGrade();
	joaquin.executeForm(perdon_divino);

	std::cout << "Not signed contracts" << std::endl;
	ShrubberyCreationForm bonsai("La placita");
	std::cout << joserra << std::endl;
	joserra.executeForm(bonsai);

	RobotomyRequestForm protesis("Marvin");
	std::cout << juanjo << std::endl;
	juanjo.executeForm(bonsai);

	PresidentialPardonForm salvaguardia("elpepe");
	std::cout << joaquin << std::endl;
	joaquin.executeForm(bonsai);
	return (0);
}
