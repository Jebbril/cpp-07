/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:18:26 by orakib            #+#    #+#             */
/*   Updated: 2023/09/26 14:36:47 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP

#define WHATEVER_HPP

#include <iostream>
#include <string>

template <typename T>
void	swap(T &a, T &b) {
	T	temp;
	temp = a;
	a = b;
	b = temp;
}

template <typename T>
T	min(T &a, T &b) {
	return (a < b ? a : b);
}

template <typename T>
T	max(T &a, T &b) {
	return (a > b ? a : b);
}

#endif