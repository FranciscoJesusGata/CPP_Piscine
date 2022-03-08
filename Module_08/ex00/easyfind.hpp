/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 22:18:58 by fgata-va          #+#    #+#             */
/*   Updated: 2022/03/02 19:46:11 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>
# include <iterator>
# include <iostream>
# include <iterator>

template <typename T>
int		easyfind(T container, int value) {
	typename T::iterator end = container.end();
	typename T::iterator found = std::find(container.begin(), end, value);
	if (found == end)
		return (-1);
	else
		return (std::distance(container.begin(), found));
}

#endif
