/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:50:13 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/21 19:01:18 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>

int	main(void) {

	Intern	becario;
	std::cout << "Basic Tests:" << std::endl << std::endl;
	Form	*arbolito = becario.makeForm("shrubbery creation", "Casa");
	std::cout << *arbolito << std::endl;
	Bureaucrat	josele("josele", 137);
	std::cout << josele << std::endl;
	josele.signForm(*arbolito);
	josele.executeForm(*arbolito);
	std::cout << std::endl;

	Form	*cirugia = becario.makeForm("robotomy request", "Curro");
	std::cout << *cirugia << std::endl;
	Bureaucrat	juanchu("juanchu", 45);
	std::cout << juanchu << std::endl;
	juanchu.signForm(*cirugia);
	for (int i = 0; i < 10; i++) {
		juanchu.executeForm(*cirugia);
	}
	std::cout << std::endl;

	Form	*meperd0nas = becario.makeForm("presidential pardon", "Pakito");
	std::cout << *meperd0nas << std::endl;
	Bureaucrat	joseju("joseju", 137);
	std::cout << joseju << std::endl;
	joseju.signForm(*meperd0nas);
	joseju.executeForm(*meperd0nas);
	std::cout << std::endl;

	delete arbolito;
	delete cirugia;
	delete meperd0nas;

	std::cout << "Error handling" << std::endl;
	try {
		Form *wrong_form = becario.makeForm("revisión salarial", "El Becario");
		std::cout << *wrong_form << std::endl;
	}
	catch (std::exception &e) {
		return (1);
	}
	return (0);
}
