/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 18:47:09 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/25 12:21:00 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template <typename T>
void	iter(T *array, unsigned int length, void f(T const &)) {
	for (unsigned int i = 0; i < length; i++) {
		f(array[i]);
	}
}

#endif
