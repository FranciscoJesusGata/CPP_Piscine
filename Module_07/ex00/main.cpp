/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 22:38:53 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/25 12:36:32 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

class Dummy {
	private:
		int _n;
	public:
		Dummy(int number): _n(number) {}
		Dummy(Dummy const &src) { *this = src; }

		~Dummy(void) {}

		Dummy const	&operator=(Dummy const &rhs) {
			this->_n = rhs._n;
			return (*this);
		}
		int const	&getValue(void) const { return (this->_n); }
		bool		operator>(Dummy const & rhs) const { return (this->_n > rhs._n); }
		bool		operator<(Dummy const & rhs) const { return (rhs._n > this->_n); }
		bool		operator>=(Dummy const & rhs) const { return (this->_n >= rhs._n); }
		bool		operator<=(Dummy const & rhs) const { return (rhs._n >= this->_n); }
		bool		operator==(Dummy const & rhs) const { return (this->_n == rhs._n); }
		bool		operator!=(Dummy const & rhs) const { return (!(this->_n == rhs._n)); }
};

std::ostream	&operator<<(std::ostream &o, Dummy const &rhs) {
	o << rhs.getValue();
	return (o);
}


int	main(void) {

	std::cout << "Testing with ints" << std::endl;
	int x = 10;
	int y = 20;

	std::cout << "a = " << x << std::endl << "b = " << y << std::endl;
	std::cout << "The higher number between a and b is: " << max<int>(x, y) << std::endl;
	std::cout << "The lower number between a and b is: " << min<int>(x, y) << std::endl;
	std::cout << "Swap a and b:" << std::endl;
	swap<int>(x, y);
	std::cout << "a = " << x << std::endl << "b = " << y << std::endl;

	std::cout << std::endl << "Testing with chars" << std::endl;
	char lol = '*';
	char kekw = 'T';

	std::cout << "a = " << lol << std::endl << "b = " << kekw << std::endl;
	std::cout << "The higher char between a and b is: " << max<char>(lol, kekw) << std::endl;
	std::cout << "The lower char between a and b is: " << min<char>(lol, kekw) << std::endl;
	std::cout << "Swap a and b:" << std::endl;
	swap<char>(lol, kekw);
	std::cout << "a = " << lol << std::endl << "b = " << kekw << std::endl;

	std::cout << std::endl << "Testing with floats" << std::endl;
	float ying = 21.042f;
	float yang = 42.021f;

	std::cout.precision(5);
	std::cout << "a = " << ying << std::endl << "b = " << yang << std::endl;
	std::cout << "The higher char between a and b is: " << max<float>(ying, yang) << std::endl;
	std::cout << "The lower char between a and b is: " << min<float>(ying, yang) << std::endl;
	std::cout << "Swap a and b:" << std::endl;
	swap<float>(ying, yang);
	std::cout << "a = " << ying << std::endl << "b = " << yang << std::endl;

	std::cout << std::endl << "Testing with doubles" << std::endl;
	double first = 42.042;
	double second = 42.021;

	std::cout << "a = " << first << std::endl << "b = " << second << std::endl;
	std::cout << "The higher char between a and b is: " << max<double>(first, second) << std::endl;
	std::cout << "The lower char between a and b is: " << min<double>(first, second) << std::endl;
	std::cout << "Swap a and b:" << std::endl;
	swap<double>(first, second);
	std::cout << "a = " << first << std::endl << "b = " << second << std::endl;

	std::cout << std::endl << "Testing with classes" << std::endl;
	Dummy a(42);
	Dummy b(21);

	std::cout << "a = " << a << std::endl << "b = " << b << std::endl;
	std::cout << "The higher number between a and b is: " << max<Dummy>(a, b) << std::endl;
	std::cout << "The lower number between a and b is: " << min<Dummy>(a, b) << std::endl;
	std::cout << "Swap a and b:" << std::endl;
	swap<Dummy>(a, b);
	std::cout << "a = " << a << std::endl << "b = " << b << std::endl;
}

