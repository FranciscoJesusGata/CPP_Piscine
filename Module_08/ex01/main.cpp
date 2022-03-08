/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 12:29:53 by fgata-va          #+#    #+#             */
/*   Updated: 2022/03/03 20:49:33 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>

int	randInt(void) {
	return (std::rand() % 100001);
}

int	main(void) {
	std::cout << "Subject test:" << std::endl << std::endl;
	Span sp = Span(5);

	sp.addNumber(3);
	sp.addNumber(5);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << std::endl << "More tests:" << std::endl << std::endl;
	std::srand(time(NULL));

	std::cout << "Add value in a full span:" << std::endl;
	try {
		sp.addNumber(2);
	} catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << std::endl << "Longest and smallest span in a span with less than two numbers:" << std::endl;
	Span pair(2);
	try {
		std::cout << pair.shortestSpan() << std::endl;
		std::cout << pair.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	pair.addNumber(randInt());
	try {
		std::cout << pair.shortestSpan() << std::endl;
		std::cout << pair.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << std::endl << "Longest and smallest span in a span with only two numbers:" << std::endl;
	pair.addNumber(randInt());
	std::cout << pair.shortestSpan() << std::endl;
	std::cout << pair.longestSpan() << std::endl;

	std::cout << std::endl << "Longest and smallest span in a span with only two numbers of the same value:" << std::endl;
	std::vector<int> vector_ft(2, 42);
	Span duo(vector_ft.begin(), vector_ft.end());
	std::cout << duo.shortestSpan() << std::endl;
	std::cout << duo.longestSpan() << std::endl;

	std::cout << std::endl << "Longest and smallest span in a span with incremental number of elements:" << std::endl;
	Span ten(10);
	for (int i = 0; i < 10; i++) {
		ten.addNumber(i + 1);
		if (i >= 1) {
			std::cout << "Max value: " << i + 1 << std::endl;
			std::cout << ten.shortestSpan() << std::endl;
			std::cout << ten.longestSpan() << std::endl;
		}
	}
	std::cout << std::endl;
	Span reverse(10);
	for (int i = 10; i > 0; i--) {
		reverse.addNumber(i);
		if (i <= 9) {
			std::cout << "Lowest value: " << i << std::endl;
			std::cout << reverse.shortestSpan() << std::endl;
			std::cout << reverse.longestSpan() << std::endl;
		}
	}

	std::cout << std::endl << "Longest and smallest span in a span with 10000 numbers:" << std::endl;
	std::vector<int> hell(10000);
	std::generate(hell.begin(), hell.end(), randInt);
	Span inferno(hell.begin(), hell.end());
	std::cout << inferno.shortestSpan() << std::endl;
	std::cout << inferno.longestSpan() << std::endl;

	std::cout << std::endl << "Longest and smallest span in a span with 30000 numbers:" << std::endl;
	std::srand(time(NULL));
	std::vector<int> hellier(30000);
	std::generate(hellier.begin(), hellier.end(), randInt);
	Span infierno(hellier.begin(), hellier.end());
	std::cout << infierno.shortestSpan() << std::endl;
	std::cout << infierno.longestSpan() << std::endl;

	std::cout << std::endl << "Longest and smallest span in a span with 100000 numbers:" << std::endl;
	std::srand(time(NULL));
	std::vector<int> wtf(100000);
	std::generate(wtf.begin(), wtf.end(), randInt);
	Span go_crazy(wtf.begin(), wtf.end());
	std::cout << go_crazy.shortestSpan() << std::endl;
	std::cout << go_crazy.longestSpan() << std::endl;

	return (0);
}
