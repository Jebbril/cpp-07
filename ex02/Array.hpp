/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:12:42 by orakib            #+#    #+#             */
/*   Updated: 2023/09/26 18:04:21 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP

#define ARRAY_HPP

#include <iostream>
#include <string>
#include <exception>

template <typename T>
class Array {
	private:
		T		*arr;
		size_t	s;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &object);
		Array	&operator=(const Array &object);
		T	&operator[](unsigned int i);
		~Array();
		unsigned int	size();
		class	IndexOutOfBounds : public std::exception {
			virtual const char* what() const throw();
		};
};


#endif