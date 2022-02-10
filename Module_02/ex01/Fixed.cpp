/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:43:27 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/07 21:20:31 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void):_fixed_point(0) {

	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int const integer):_fixed_point(integer << _fractional_bits) {

	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed(float const decimal) {

	std::cout << "Float constructor called" << std::endl;
	this->_fixed_point = roundf(decimal * (1 << Fixed::_fractional_bits));
	return ;
}

Fixed::Fixed(Fixed const & src) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed(void) {

	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed	&Fixed::operator=(Fixed const &rhs) {

	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_fixed_point = rhs.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs) {

	o << rhs.toFloat();
	return (o);
}

int		Fixed::getRawBits(void) const {

	return (this->_fixed_point);
}

void	Fixed::setRawBits(int const raw) {

	this->_fixed_point = raw;
}

float	Fixed::toFloat(void) const {

	return ((float)this->_fixed_point / (1 << Fixed::_fractional_bits));
}

int		Fixed::toInt(void) const {

	return (this->_fixed_point >> Fixed::_fractional_bits);
}
