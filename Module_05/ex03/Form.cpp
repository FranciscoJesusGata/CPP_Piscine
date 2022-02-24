/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:16:11 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/21 14:35:14 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <string>
#include <iostream>

Form::Form(std::string name, std::string target,
		unsigned int sign_grade, unsigned int execute_grade):
	_name(name), _target(target) ,_sign_grade(sign_grade), _execute_grade(execute_grade)
{

	if (this->_sign_grade < 1 || this->_execute_grade < 1)
		throw Form::GradeTooHighException();
	else if (this->_sign_grade > 150 || this->_execute_grade > 150)
		throw Form::GradeTooLowException();
	return ;
}

Form::Form(Form const &src):
	_name(src._name), _target(src._target), _sign_grade(src._sign_grade),
		_execute_grade(src._execute_grade) {

	*this = src;
	return ;
}

Form	&Form::operator=(Form const &rhs) {

	this->_signed = rhs._signed;
	return (*this);
}

Form::~Form(void) {

	return ;
}

std::string	Form::getName(void) const {

	return (this->_name);
}

std::string	Form::getTarget(void) const {

	return (this->_target);
}
unsigned int	Form::getSignGrade(void) const {

	return (this->_sign_grade);
}

unsigned int	Form::getExecuteGrade(void) const {

	return (this->_execute_grade);
}

bool	Form::getSign(void) const {

	return (this->_signed);
}

void	Form::beSigned(Bureaucrat const &bureaucrat) {
	if (bureaucrat.getGrade() > this->_sign_grade) {
		throw GradeTooLowException();
	}
	if (!this->_signed)
		this->_signed = !this->_signed;
	std::cout << bureaucrat.getName() << " signs " << this->_name << std::endl;
}

const char*	Form::GradeTooHighException::what() const throw() {
	return ("this grade is too high");
}

const char*	Form::GradeTooLowException::what() const throw() {
	return ("this grade is too low");
}

const char*	Form::NotSignedException::what() const throw() {
	return ("this form is not signed");
}

void	Form::checkExecuter(Bureaucrat const &executer) const {

	if (!this->_signed)
		throw NotSignedException();
	else if (executer.getGrade() > this->_execute_grade)
		throw GradeTooLowException();
	std::cout << executer.getName() << " execute " << this->_name << std::endl;
}

std::ostream	&operator<<(std::ostream &o, Form const &src) {

	o << "Form " << src.getName() <<", required grade to sign: " << src.getSignGrade();
	o << ". Required grade to execute: " << src.getExecuteGrade();
	o << ". Is ";
	if (src.getSign())
		o << "signed.";
	else
		o << "not signed.";
	o << " And is targeted to " << src.getTarget();
	return (o);
}
