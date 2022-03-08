/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:34:28 by fgata-va          #+#    #+#             */
/*   Updated: 2022/03/03 20:38:28 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <stack>
#include <list>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>

int	randInt(void) {
	return (std::rand() % 101);
}

template <typename T>
void	print_value(T it) {
	std::cout << it << " ";
}

template <typename T>
void	nested_print(MutantStack<T> ms) {
	std::for_each(ms.begin(), ms.end(), print_value<T>);
	std::cout << std::endl;
}

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	while (rit != rite)
	{
		if (*rit != s.top())
			std::cout << *it << " " << s.top() << " are different" << std::endl;
		rit++;
		s.pop();
	}

	MutantStack<int> ms = mstack;
	std::stack<int> st(ms);
	while (!ms.empty())
	{
		if (ms.top() != st.top())
			std::cout << ms.top() << " " << st.top() << " are different" << std::endl;
		st.pop();
		ms.pop();
	}

	std::string str = "This is a test of how create a pile of chars using a string";
	MutantStack<char> strack;
	for (int i = 0; str[i]; i++)
		strack.push(str[i]);
	MutantStack<char>::iterator sit = strack.begin();
	MutantStack<char>::iterator site = strack.end();
	for_each(sit, site, print_value<char>);
	std::cout << std::endl;

	MutantStack<char> cpy = strack;
	MutantStack<char>::iterator cpy_sit = cpy.begin();
	sit = strack.begin();
	if (!std::equal(sit, site, cpy_sit))
		std::cout << "Assingment operator doesn't works as espected";

	*sit = 't';
	if (std::equal(sit, site, cpy_sit))
		std::cout << "This isn't a deep copy";

	MutantStack<MutantStack<int> > nested_mstacks;
	for (int i = 0; i < 10; i++) {
		MutantStack <int> row;
		for (int j = 0; j < 10; j++) {
			row.push(randInt());
		}
		nested_mstacks.push(row);
	}
	std::for_each(nested_mstacks.begin(), nested_mstacks.end(), nested_print<int>);
	std::cout << std::endl;
	return (0);
}
