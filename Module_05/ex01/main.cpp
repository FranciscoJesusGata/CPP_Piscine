/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:50:13 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/23 17:06:43 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int	main(void) {

	try {
		Form	*contrato = new Form("Contrato de alquiler", 4, 0);
		std::cout << "Error: " << *contrato << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	try {
		Form	*contrato = new Form("Contrato de alquiler", 151, 3);
		std::cout << "Error: " << *contrato << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	Form	*contrato = new Form("Contrato de alquiler", 4, 3);
	std::cout << *contrato << std::endl;
	Bureaucrat jose("Jose", 5);
	std::cout << jose << std::endl;
	jose.signForm(*contrato);
	jose.incrementGrade();
	jose.signForm(*contrato);
	std::cout << *contrato << std::endl;
	jose.signForm(*contrato);
	std::cout << *contrato << std::endl;
	delete contrato;
	return (0);
}
