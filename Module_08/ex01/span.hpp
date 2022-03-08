/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:04:50 by fgata-va          #+#    #+#             */
/*   Updated: 2022/03/03 16:08:09 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <vector>

class Span {
	private:
		unsigned int		_size;
		unsigned int		_stored;
		std::vector<int>	_memory;

		class NoSpaceLeftException: public std::exception {
			public:
				virtual const char* what() const throw();
		};
	public:
		Span(unsigned int n);
		template <typename Iterator>
		Span(Iterator start, Iterator end) {
			this->_memory = std::vector<int>(start, end);
			this->_size = end - start;
			this->_stored = this->_size;
		}
		Span(Span const &src);
		~Span(void);

		Span	&operator=(Span const &rhs);
		void	addNumber(int value);
		int		shortestSpan(void) const;
		int		longestSpan(void) const;
};

#endif
