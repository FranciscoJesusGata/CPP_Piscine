/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:43:27 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/09 16:14:57 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void):_fixed_point(0) {

	return ;
}

Fixed::Fixed(int const integer):_fixed_point(integer << _fractional_bits) {

	return ;
}

Fixed::Fixed(float const decimal) {

	this->_fixed_point = roundf(decimal * (1 << Fixed::_fractional_bits));
	return ;
}

Fixed::Fixed(Fixed const & src) {

	*this = src;
	return ;
}

Fixed::~Fixed(void) {

	return ;
}

bool	Fixed::operator>(Fixed const & rhs) const {
	return (this->_fixed_point > rhs.getRawBits());
}

bool	Fixed::operator<(Fixed const & rhs) const {
	return (rhs.getRawBits() > this->_fixed_point);
}

bool	Fixed::operator>=(Fixed const & rhs) const {
	return (this->_fixed_point >= rhs.getRawBits());
}

bool	Fixed::operator<=(Fixed const & rhs) const {
	return (rhs.getRawBits() >= this->_fixed_point);
}

bool	Fixed::operator==(Fixed const & rhs) const {
	return (this->_fixed_point == rhs.getRawBits());
}

bool	Fixed::operator!=(Fixed const & rhs) const {
	return (!(this->_fixed_point == rhs.toFloat()));
}

Fixed	&Fixed::operator=(Fixed const &rhs) {

	if (this != &rhs)
		this->_fixed_point = rhs.getRawBits();
	return (*this);
}

Fixed	Fixed::operator+(Fixed const &rhs) const {

	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(Fixed const &rhs) const {

	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(Fixed const &rhs) const {

	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(Fixed const &rhs) const {

	return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed	&Fixed::operator++(void) {

	this->setRawBits(this->_fixed_point + 1);
	return (*this);
}

Fixed	Fixed::operator++(int) {

	Fixed	tmp(*this);
	++(*this);
	return (tmp);
}

Fixed	&Fixed::operator--(void) {

	this->setRawBits(this->_fixed_point - 1);
	return (*this);
}

Fixed	Fixed::operator--(int) {

	Fixed	tmp(*this);
	--(*this);
	return (tmp);
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

Fixed	&Fixed::min(Fixed &left, Fixed &right) {

	if (left > right)
		return (right);
	else
		return (left);
}

const Fixed	&Fixed::min(Fixed const &left, Fixed const &right) {

	if (left > right)
		return (right);
	else
		return (left);
}

Fixed	&Fixed::max(Fixed &left, Fixed &right) {

	if (left > right)
		return (left);
	else
		return (right);
}

const Fixed	&Fixed::max(Fixed const &left, Fixed const &right) {

	if (left > right)
		return (left);
	else
		return (right);
}
