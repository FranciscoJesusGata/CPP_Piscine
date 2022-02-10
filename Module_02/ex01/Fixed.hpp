/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 11:17:13 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/07 19:57:22 by fgata-va         ###   ########.fr       */
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

		Fixed			&operator=(Fixed const & rhs);

		int				getRawBits(void) const;
		void			setRawBits(int const raw);
		float			toFloat(void) const;
		int				toInt(void) const;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs);

#endif
