/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 21:18:52 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/18 14:59:31 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <string>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
	Form("shrubbery creation form", target, 145, 137) {
		return ;
	}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &src): Form(src) {

	*this = src;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	return ;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm &src) {

	Form::operator=(src);
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executer) const {
	this->checkExecuter(executer);

	std::ofstream	file(std::string(this->getTarget() + "_shrubbery"));
	if (!file.is_open()) {
		std::cout << "Couldn't create file " << this->getTarget() << "_shrubbery" << std::endl;
		return ;
	}
	file << "          &&& &&  & &&" << std::endl;
	file << "      && &\\/&\\|& ()|/ @, &&" << std::endl;
	file << "      &\\/(/&/&||/& /_/)_&/_&" << std::endl;
	file << "   &() &\\/&|()|/&\\/ '%\" & ()" << std::endl;
	file << "  &_\\_&&_\\ |& |&&/&__%_/_& &&" << std::endl;
	file << "&&   && & &| &| /& & % ()& /&&" << std::endl;
	file << " ()&_---()&\\&\\|&&-&&--%---()~" << std::endl;
	file << "     &&     \\|||" << std::endl;
	file << "             |||" << std::endl;
	file << "             |||" << std::endl;
	file << "             |||" << std::endl;
	file << "       , -=-~  .-^- _" << std::endl;
	file.close();
}
