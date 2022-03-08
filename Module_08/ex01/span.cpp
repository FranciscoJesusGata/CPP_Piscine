/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 20:56:35 by fgata-va          #+#    #+#             */
/*   Updated: 2022/03/03 20:46:50 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <vector>
#include <algorithm>

Span::Span(unsigned int n):_size(n), _stored(0), _memory(std::vector<int>(n)) {
	return ;
}

Span::Span(Span const &src) {
	*this = src;
	return ;
}

Span::~Span(void) {
	return ;
}

Span	&Span::operator=(Span const &rhs) {
	this->_size = rhs._size;
	this->_memory = rhs._memory;
	this->_stored = rhs._stored;
	return (*this);
}

const char *Span::NoSpaceLeftException::what() const throw() {
	return ("vector full, can't add more values");
}

void	Span::addNumber(int value) {
	if (this->_stored == this->_size)
		throw NoSpaceLeftException();
	this->_memory[this->_stored] = value;
	this->_stored++;
}

int		Span::longestSpan(void) const {
	if (this->_stored < 2)
		throw std::out_of_range("not enought values stored");
	std::vector<const int>::iterator end = this->_memory.begin() + this->_stored;
	const int min = *(std::min_element(this->_memory.begin(), end));
	const int max = *(std::max_element(this->_memory.begin(), end));
	return (max - min);
}

int		Span::shortestSpan(void) const {
	if (this->_stored < 2)
		throw std::out_of_range("not enought values stored");
	std::vector<const int>::iterator end = this->_memory.begin() + this->_stored;
	std::vector<const int>::iterator min = std::min_element(this->_memory.begin(), end);
	std::vector<const int>::iterator first_half = std::min_element(this->_memory.begin(), min);
	std::vector<const int>::iterator second_half = std::min_element(min + 1, end);
	std::vector<const int>::iterator second_min;
	if (first_half == min)
		second_min = second_half;
	else if (second_half == end)
		second_min = first_half;
	else
		second_min = (*first_half <= *second_half ? first_half : second_half);
	return (*second_min - *min);
}

