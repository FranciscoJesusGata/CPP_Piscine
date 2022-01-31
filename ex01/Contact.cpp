/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:24:01 by fgata-va          #+#    #+#             */
/*   Updated: 2022/01/31 12:15:21 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact(void) {

	return ;
}

Contact::~Contact(void) {

	return ;
}

std::string	Contact::get_name(void) const {

	return this->_first_name;
}

void	Contact::set_name(std::string name) {

	this->_first_name = name;
	return ;
}

std::string	Contact::get_last_name(void) const {

	return this->_last_name;
}

void	Contact::set_last_name(std::string last_name) {

	this->_last_name = last_name;
	return ;
}

std::string	Contact::get_nick(void) const {

	return this->_nickname;
}

void	Contact::set_nick(std::string nick) {

	this->_nickname = nick;
	return ;
}

std::string	Contact::get_phone(void) const {

	return this->_phone;
}

void	Contact::set_phone(std::string phone) {

	this->_phone = phone;
	return ;
}

std::string	Contact::get_secret(void) const {

	return this->_darkest_secret;
}

void	Contact::set_secret(std::string secret) {

	this->_darkest_secret = secret;
	return ;
}

