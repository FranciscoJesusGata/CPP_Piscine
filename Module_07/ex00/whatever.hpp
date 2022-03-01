/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 21:23:48 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/24 18:38:52 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void	swap(T &x, T &y) {
	T z = x;

	x = y;
	y = z;
}

template <typename T>
T	max(T x, T y) {
	return (x >= y ? x : y);
}

template <typename T>
T	min(T x, T y) {
	return (x >= y ? y : x);
}

#endif
