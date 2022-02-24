/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:59:32 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/24 17:29:08 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <time.h>

class Base {
	public:
		virtual	~Base(void) {}
};

class A: public Base {};
class B: public Base {};
class C: public Base {};

Base	*generate(void) {

	srand(time(NULL));
	int number = rand() % 3 + 1;
	switch (number) {
		case 1:
			return (new A());
		case 2:
			return (new B());
		default:
			return (new C());
	}
}

void	identify(Base *p) {
	if (!p)
		return ;
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void	identify(Base &p) {
	try {
		A a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast &e) {
		try {
			B b = dynamic_cast<B &>(p);
			std::cout << "B" << std::endl;
		}
		catch (std::bad_cast &e) {
			std::cout << "C" << std::endl;
		}
	}

}

int main(void) {
	Base *base = generate();

	identify(base);
	identify(*base);
	delete base;
	return (0);
}
