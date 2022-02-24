/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:00:12 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/23 16:55:32 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

Bureaucrat::Bureaucrat(std::string name, unsigned int grade): _name(name) {

	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src): _name(src._name) {

	*this = src;
	return ;
}

Bureaucrat::~Bureaucrat(void) {

	return ;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &rhs) {

	this->_grade = rhs._grade;
	return (*this);
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return ("this grade is too high, the maximum is 1");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return ("this grade is too low, the minimum is 150");
}

std::string	Bureaucrat::getName(void) const {

	return (this->_name);
}

unsigned int	Bureaucrat::getGrade(void) const {

	return (this->_grade);
}

void			Bureaucrat::incrementGrade(void) {

	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void			Bureaucrat::decrementGrade(void) {

	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

void			Bureaucrat::signForm(Form &form) const {
	try {
		form.beSigned(*this);
	}
	catch (std::exception &e) {
		std::cout << this->_name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &src) {

	o << src.getName() <<", bureaucrat grade " << src.getGrade();
	return (o);
}
