/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:32:38 by orakib            #+#    #+#             */
/*   Updated: 2023/09/26 14:59:57 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP

#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void	func(T &param) {
	std::cout << param << " ";
}

template <typename T>
void	iter(T *arr, size_t length, void(*func)(T &param)) {
	size_t	i = -1;

	while (++i < length) {
		func(arr[i]);
	}
}

#endif