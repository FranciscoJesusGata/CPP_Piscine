/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 21:18:52 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/23 13:16:20 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <string>
#include <fstream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(std::string target):
	Form("robotomy request form", target, 72, 45) {
		return ;
	}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &src): Form(src) {

	*this = src;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
	return ;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm &src) {

	Form::operator=(src);
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executer) const {
	this->checkExecuter(executer);

	std::cout << "* BZZZZZZZZZZ *" << std::endl;
	if (rand() % 10 + 1 >= 5)
		std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
	else
		std::cout << "Robotomy has been a failure" << std::endl;
}
