/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 23:45:11 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/28 20:36:52 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <stdexcept>
# include <iostream>

template <typename T>
class Array {
	private:
		T				*_array;
		unsigned int	_size;
	public:
		Array<T>(void):_array(NULL), _size(0) {}
		Array<T>(unsigned int size): _array(new T[size]), _size(size) {}
		Array<T>(Array &src) {*this = src;}
		~Array<T>(void) {
			delete [] this->_array;
		}

		Array const		&operator=(Array const &rhs) {
			this->_array = new T[rhs._size];
			this->_size = rhs._size;
			for (unsigned int i = 0; i < rhs._size; i++)
				this->_array[i] = rhs._array[i];
			return (*this);
		}
		T				&operator[](int index) {
			if (index < 0 || index >= static_cast<int>(this->_size))
				throw std::out_of_range("memory out of range");
			return (this->_array[index]);
		}
		T				operator[](int index) const {
			if (index < 0 || index >= static_cast<int>(this->_size))
				throw std::out_of_range("memory out of range");
			return (this->_array[index]);

		}

		unsigned int	size(void) const {
			return (this->_size);
		}
};

template <typename T>
std::ostream	&operator<<(std::ostream &o, const Array<T> &rhs) {
	o << "[";
	for (unsigned int i = 0; i < rhs.size(); i++) {
		o << rhs[i];
		if (i != rhs.size() - 1)
			o << ", ";
	}
	o << "]";
	return (o);
}

#endif
