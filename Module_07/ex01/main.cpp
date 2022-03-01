/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 18:55:21 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/25 12:39:20 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>
#include <iostream>

class Dummy {
	private:
		int _n;
	public:
		Dummy(void): _n(0) {}
		Dummy(int number): _n(number) {}
		Dummy(Dummy const &src) { *this = src; }

		~Dummy(void) {}

		Dummy const	&operator=(Dummy const &rhs) {
			this->_n = rhs._n;
			return (*this);
		}
		int const	&getValue(void) const { return (this->_n); }
		void		setValue(int const n) { this->_n = n; }
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

void	megaphone(std::string const &input) {
	for (int i = 0; input[i]; i++) {
		std::cout << static_cast<char>(toupper(input[i]));
	}
	std::cout << " ";
}

void	toUpperCase(char const &c) {
	const_cast<char &>(c) = toupper(c);
}

void	dummyRandom(Dummy const &e) {
	const_cast<Dummy &>(e).setValue(rand() % 100 + 1);
}

template <typename T>
void	print_values(T const &element) {
	std::cout << element << " ";
}

template <typename T>
void	createRandom(T const &i) {
	const_cast<T &>(i) = rand() % 100 + 1;
}

template <>
void	createRandom(float const &i) {
	const_cast<float &>(i) = static_cast <float>(rand()) / static_cast <float> (RAND_MAX);
}

int main(void) {

	int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	std::string lst[] = {
		"¿",
		"Hola",
		"que",
		"tal",
		"?"
	};
	Dummy *clase = new Dummy[20];

	iter<int>(numbers, 10, print_values<int>);
	std::cout << std::endl;
	iter<std::string>(lst, sizeof(lst)/sizeof(lst[0]), print_values<std::string>);
	std::cout << std::endl;
	iter<std::string>(lst, sizeof(lst)/sizeof(lst[0]), megaphone);
	std::cout << std::endl;
	iter<char>(const_cast<char *>(lst[1].c_str()), lst[1].size(), toUpperCase);
	iter<std::string>(lst, sizeof(lst)/sizeof(lst[0]), print_values<std::string>);
	iter<char>(const_cast<char *>(lst[2].c_str()), lst[2].size(), toUpperCase);
	iter<std::string>(lst, sizeof(lst)/sizeof(lst[0]), print_values<std::string>);
	iter<char>(const_cast<char *>(lst[3].c_str()), lst[3].size(), toUpperCase);
	iter<std::string>(lst, sizeof(lst)/sizeof(lst[0]), print_values<std::string>);
	std::cout << std::endl;
	srand(time(NULL));
	int random[10];
	iter<int>(random, 10, createRandom<int>);
	iter<int>(random, 10, print_values<int>);
	std::cout << std::endl;
	float randomf[10];
	iter<float>(randomf, 10, createRandom<float>);
	iter<float>(randomf, 10, print_values<float>);
	std::cout << std::endl;
	double randomd[10];
	iter<double>(randomd, 10, createRandom<double>);
	iter<double>(randomd, 10, print_values<double>);
	std::cout << std::endl;
	iter<Dummy>(clase, 20, dummyRandom);
	iter<Dummy>(clase, 20, print_values<Dummy>);
	std::cout << std::endl;
	delete [] clase;
	return (0);
}
