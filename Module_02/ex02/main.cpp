/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 19:44:45 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/09 16:15:32 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int	main(void) {

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "Subject tests: " << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "++a: " << ++a << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "a++: "  << a++ << std::endl;
	std::cout << "a: "<< a << std::endl;

	std::cout << "b: " << b << std::endl;

	std::cout << "Who is bigger? a or b?: " << Fixed::max( a, b ) << std::endl;

	std::cout << std::endl << "More tests:" << std::endl;
	Fixed	c(42.42f);
	Fixed	d(21.21f);
	Fixed	e( Fixed(5) + Fixed(10.1f));
	Fixed	f( Fixed (5) - Fixed(0.5f));
	Fixed	g( Fixed(20) * Fixed(0.5f));
	Fixed	h( Fixed(21.21f) / Fixed(0.5f));
	Fixed	etesech(c);

	std::cout << std::endl << "Mathematical Operators tests:" << std::endl;
	std::cout << "42.42 + 21.21 = " << c + d << std::endl;
	std::cout << "42.42 + 8.08 = " << c + Fixed(8.08f) << std::endl;
	std::cout << "Fixed(5) + Fixed(10.1f) = "<< e << std::endl;
	std::cout << "42.42 - 21.21 = " << c - d << std::endl;
	std::cout << "42.42 - 42 = " << c - 42 << std::endl;
	std::cout << "Fixed(5) - Fixed(0.5f) = " << f << std::endl;
	std::cout << "42.42 * 2 = " << c * 2 << std::endl;
	std::cout << "Fixed(20) * Fixed(0.5f) = " << g << std::endl;
	std::cout << "42.42 / 2 = " << c / 2 << std::endl;
	std::cout << "42.42 / 9.8 = " << c / 9.8f << std::endl;
	std::cout << "Fixed(21.21f) / Fixed(0.5f) = " << h << std::endl ;
	std::cout << "x: " << etesech << std::endl;
	std::cout << "x--: " << etesech-- << std::endl;
	std::cout << "x: " << etesech << std::endl;
	std::cout << "--x: " << --etesech << std::endl << std::endl;

	std::cout << "Logic Operators tests:" << std::endl;
	std::cout << std::boolalpha;
	std::cout <<  "Is 42.42 / 2 equal to 21.21? " << ((c / 2) == d) << std::endl;
	std::cout << "Is 42.42 equal to 42.42? " << (c == 42.42f) << std::endl;
	std::cout << "Is 42.42 greater than 42? " << (c > 42) << std::endl;
	std::cout << "Is 42.42 greater or equal to 21.21? " << (c >= d) << std::endl;
	std::cout << "Is 42.42 / 5 less or equal to 21.21? " << (c / 5 <= d) << std::endl;
	
	Fixed const	i(42.84f);
	Fixed const	j(42.21f);
	Fixed const	&k = Fixed::max(i, j);

	std::cout << std::endl << "Max and Min functions tests: " << std::endl;
	std::cout << "The max value between 42.84f and 42.21f is: " << k << std::endl;
	std::cout << "The min value between 42.84f and 42.21f is: " << Fixed::min(i, j) << std::endl;
	std::cout << "Non-constant min between " << c << " and "<< h << ": " << Fixed::min(c,h) << std::endl;
	std::cout << "Non-constant max between " << d << " and "<< g << ": "  << Fixed::max(d,g) << std::endl;
	return 0;
}
