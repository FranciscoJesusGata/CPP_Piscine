/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:50:13 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/17 11:52:49 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int	main(void) {

	try {
		Bureaucrat const	*antonio = new Bureaucrat("Antonio", 0);
		std::cout << *antonio << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat *juan = new Bureaucrat("Juan", 151);
		std::cout << *juan << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	Bureaucrat jose("Jose", 150);
	std::cout << jose << std::endl;
	try {
		jose.decrementGrade();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << jose << std::endl;
	for (int i = 0; i < 149; i++)
		jose.incrementGrade();
	std::cout << jose << std::endl;
	try {
		jose.incrementGrade();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	for (int i = 0; i < 149; i++)
		jose.decrementGrade();
	std::cout << jose << std::endl;
	return (0);
}
