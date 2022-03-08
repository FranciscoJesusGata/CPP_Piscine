/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:48:01 by fgata-va          #+#    #+#             */
/*   Updated: 2022/03/03 19:54:59 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>
# include <deque>

template <typename T>
class MutantStack: public std::stack<T> {
	public:
		MutantStack(void): std::stack<T>() {}
		template <typename container_type>
		explicit MutantStack(const container_type &ctnr): std::stack<T>(ctnr) {}
		MutantStack(std::stack<T> const &src) { *this = src; }

		MutantStack<T>		&operator=(MutantStack<T> const &rhs) {
			*this = std::stack<T>(rhs);
			return (*this);
		}
		typedef typename	std::deque<T>::iterator			iterator;
		typedef typename	std::deque<T>::const_iterator	const_iterator;
		typedef typename	std::deque<T>::reverse_iterator			reverse_iterator;
		typedef typename	std::deque<T>::const_reverse_iterator	const_reverse_iterator;
		iterator			begin() { return (std::stack<T>::c.begin()); }
		const_iterator		begin() const { return (std::stack<T>::c.begin()); }
		iterator			end() { return (std::stack<T>::c.end()); }
		const_iterator		end() const { return (std::stack<T>::c.end()); }
		reverse_iterator	rbegin() { return (std::stack<T>::c.rbegin()); }
		const_reverse_iterator	rbegin() const { return (std::stack<T>::c.rbegin()); }
		reverse_iterator	rend() { return (std::stack<T>::c.rend()); }
		const_reverse_iterator	rend() const { return (std::stack<T>::c.rend()); }
};

#endif
