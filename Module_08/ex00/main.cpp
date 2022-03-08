/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 23:17:51 by fgata-va          #+#    #+#             */
/*   Updated: 2022/03/02 20:53:50 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <vector>
#include <set>
#include <deque>
#include <iostream>
#include <cstdlib>
#include <ctime>

template <typename T>
void	test(T container, int value) {
	int pos = easyfind(container, value);
	if (pos >= 0)
		std::cout << "Número " << value << " encontrado en la posición " << pos << std::endl;
	else
		std::cout << "Número " << value << " no encontrado en el contenedor" << std::endl;
}

int	main(void) {
	int				array[] = {1, 2, 3, 4, 5, 6, 42, 7, 8, 9};
	int				arraySize = (sizeof(array) / sizeof(int));

	std::cout << "Base array:" << std::endl;
	for (int i = 0; i < arraySize; i++)
		std::cout << array[i] << " ";

	std::cout << std::endl << "Vector test:" << std::endl;
	std::vector<int> vector(array, array + arraySize);
	test<std::vector<int> >(vector, 9);
	test<std::vector<int> >(vector, 10);

	std::cout << std::endl << "List test:" << std::endl;
	std::list<int> list(array, array + arraySize);
	test<std::list<int> >(list, 1);
	test<std::list<int> >(list, 0);

	std::cout << std::endl << "Set test:" << std::endl;
	std::set<int> set(array, array + arraySize);
	test<std::set<int> >(set, 7);
	test<std::set<int> >(set, -1);

	std::cout << std::endl << "Double ended queue array:" << std::endl;
	std::deque<int> cola;
	srand(time(NULL));
	for (int i = 0; i < 100; i++)
		cola.push_back(rand() % 101);
	for (int i = 0; i < 100; i++)
		std::cout << cola[i] << " ";
	std::cout << std::endl;
	test<std::deque<int> >(cola, 42);

	std::cout << std::endl << "Empty containers test:" << std::endl;
	std::vector<int> v_empty;
	std::list<int> l_empty;
	std::set<int> s_empty;
	std::deque<int> d_empty;
	test(v_empty, 1);
	test(l_empty, 2);
	test(s_empty, 3);
	test(d_empty, 4);
}
