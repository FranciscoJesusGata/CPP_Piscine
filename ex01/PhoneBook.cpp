/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:23:29 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/01 12:32:51 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>

PhoneBook::PhoneBook(void) {

	std::cout << "Welcome to my awesome Phone Book!" << std::endl;
	this->contacts_number = 0;
	return ;
}

PhoneBook::~PhoneBook(void) {

	return ;
}

void	PhoneBook::menu(void) {

	std::string	input;
	bool		exit;

	exit = false;
	while (!exit)
	{
		std::cout << "Insert a command: ";
		std::getline(std::cin, input);
		if (input == "ADD")
			this->_add();
		else if (input == "SEARCH")
			this->_search();
		else if (input == "EXIT")
			exit = true;
		else
			std::cout << input << " is not a command" << std::endl;
	}
}

void	PhoneBook::_add(void) {

	std::string	info;

	if (this->contacts_number == 8)
		this->contacts_number--;
	std::cout << "Contact's first name: ";
	std::getline(std::cin, info);
	this->contacts[contacts_number].set_name(info);
	std::cout << "Contact's last name: ";
	std::getline(std::cin, info);
	this->contacts[contacts_number].set_last_name(info);
	std::cout << "Contact's nickname: ";
	std::getline(std::cin, info);
	this->contacts[contacts_number].set_nick(info);
	std::cout << "Contact's phone number: ";
	std::getline(std::cin, info);
	this->contacts[contacts_number].set_phone(info);
	std::cout << "Contact's darkest secret: ";
	std::getline(std::cin, info);
	this->contacts[contacts_number].set_secret(info);
	if (this->contacts_number < 8)
		this->contacts_number++;
}

std::string	PhoneBook::_str_truncate(std::string src, size_t max_width) const {

	if (src.size() > max_width)
	{
		std::string truncated = src.substr(0,8);
		truncated.append(".");
		return (truncated);
	}
	return (src);
}

void	PhoneBook::_print_contacts(void) const {

	std::cout << "|";
	std::cout << std::setw(10) << "index";
	std::cout << "|";
	std::cout << std::setw(10) << "fist_name";
	std::cout << "|";
	std::cout << std::setw(10) << "last_name";
	std::cout << "|";
	std::cout << std::setw(10) << "nickname";
	std::cout << "|";
	std::cout << std::endl;
	for (int i = 0; i < this->contacts_number; i++) {
		std::cout << "|";
		std::cout << std::setw(10) << i + 1;
		std::cout << "|";
		std::cout << std::setw(10) << PhoneBook::_str_truncate(this->contacts[i].get_name(), 10);
		std::cout << "|";
		std::cout << std::setw(10) << PhoneBook::_str_truncate(this->contacts[i].get_last_name(), 10);
		std::cout << "|";
		std::cout << std::setw(10) << PhoneBook::_str_truncate(this->contacts[i].get_nick(), 10);
		std::cout << "|";
		std::cout << std::endl;
	}
}

bool	PhoneBook::_is_number(std::string src) {

	for (int i = 0; src[i]; i++) {
		if (!std::isdigit(src[i]))
			return (false);
	}
	return (true);
}

void	PhoneBook::_contact_info(int index) const {

	std::cout << "Contact " << index << ":"<< std::endl;
	index--;
	std::cout << "\t" << "First name: " << this->contacts[index].get_name() << std::endl;
	std::cout << "\t" << "Last name: " << this->contacts[index].get_last_name() << std::endl;
	std::cout << "\t" << "Nickname: " << this->contacts[index].get_nick() << std::endl;
	std::cout << "\t" << "Phone: " << this->contacts[index].get_phone() << std::endl;
	std::cout << "\t" << "Darkest secret: " << this->contacts[index].get_secret() << std::endl;
}

void	PhoneBook::_search(void) const {

	int			index;
	std::string	input;

	this->_print_contacts();
	std::cout << "Insert an index for the contanct info: ";
	getline(std::cin, input);
	if (!PhoneBook::_is_number(input)) {
		std::cout << "Invalid index: not a number" << std::endl;
		return ;
	}
	std::stringstream	convert(input);
	convert >> index;
	if (index < 1 || index > 8) {
		std::cout << "Invalid index: out of range" << std::endl;
		return ;
	} else if (index > this->contacts_number) {
		std::cout << "Invalid index: that contact doesn't exist" << std::endl;
		return ;
	}
	this->_contact_info(index);
}
