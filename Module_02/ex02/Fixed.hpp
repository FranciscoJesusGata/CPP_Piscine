/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 11:17:13 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/09 16:13:52 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed {

	private:
		int					_fixed_point;
		static const int	_fractional_bits = 8;

	public:
		Fixed(void);
		Fixed(int const integer);
		Fixed(float const decimal);
		~Fixed(void);
		Fixed(Fixed const & src);

		bool				operator>(Fixed const & rhs) const;
		bool				operator<(Fixed const & rhs) const;
		bool				operator>=(Fixed const & rhs) const;
		bool				operator<=(Fixed const & rhs) const;
		bool				operator==(Fixed const & rhs) const;
		bool				operator!=(Fixed const & rhs) const;
		Fixed				operator+(Fixed const & rhs) const;
		Fixed				operator-(Fixed const & rhs) const;
		Fixed				operator*(Fixed const & rhs) const;
		Fixed				operator/(Fixed const & rhs) const;
		Fixed				&operator=(Fixed const & rhs);
		Fixed				&operator++(void);
		Fixed				operator++(int);
		Fixed				&operator--(void);
		Fixed				operator--(int);

		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;
		static Fixed		&min(Fixed &left, Fixed &right);
		static const Fixed	&min(Fixed const &left, Fixed const &right);
		static Fixed		&max(Fixed &left, Fixed &right);
		static const Fixed	&max(Fixed const &left, Fixed const &right);
};

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs);

#endif
