/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:19:18 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/21 19:01:45 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <string>
#include <iostream>

Intern::Intern(void) {

	return ;
}

Intern::~Intern(void) {

	return ;
}

const char	*Intern::UnknownFormException::what() const throw() {
	return ("unknown form file");
}

Form	*Intern::makeForm(std::string name, std::string target) {

	Form		*form = NULL;
	int			i = 0;
	std::string	keys[] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	while (i < 3) {
		if (keys[i] == name) {
			std::cout << "Intern creates " << name << std::endl;
			break ;
		}
		i++;
	}
	switch (i) {
	case 0:
		form = new ShrubberyCreationForm(target);
		break ;
	case 1:
		form = new RobotomyRequestForm(target);
		break ;
	case 2:
		form = new PresidentialPardonForm(target);
		break ;
	default:
		std::cout << "Error: unknown form type" << std::endl;
		throw UnknownFormException();
	}
	return (form);
}

