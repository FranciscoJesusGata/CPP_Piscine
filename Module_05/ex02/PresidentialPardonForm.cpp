/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 21:18:52 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/17 22:40:20 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <string>
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm(std::string target):
	Form("presidential pardon form", target, 25, 5) {
		return ;
	}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &src): Form(src) {

	*this = src;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
	return ;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm &src) {

	Form::operator=(src);
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executer) const {
	this->checkExecuter(executer);

	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
