/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:00:09 by orakib            #+#    #+#             */
/*   Updated: 2023/09/26 18:10:26 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
const char	*Array<T>::IndexOutOfBounds::what() const throw() {
	return ("Exception thrown : Index out of bounds");
}

template <typename T>
Array<T>::Array() : arr(new T [0]), s(0) {

}

template <typename T>
Array<T>::Array(unsigned int n) : arr(new T [n]), s(n) {

}

template <typename T>
Array<T>::Array(const Array<T> &object) : s(object.s) {
	size_t	i = -1;

	this->arr = new T [object.s];
	while (++i < object.s)
		this->arr[i] = object.arr[i];
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array<T> &object) {
	size_t	i = -1;

	if (this != *object) {
		delete [] this->arr;
		this->s = object.s;
		this->arr = new T [object.s];
		while (++i < object.s)
			this->arr[i] = object.arr[i];
	}
	return (*this);
}

template <typename T>
T	&Array<T>::operator[](unsigned int i) {
	if (i >= this->s)
		throw IndexOutOfBounds();
	return (this->arr[i]);
}

template <typename T>
Array<T>::~Array() {
	delete [] this->arr;
}

template <typename T>
unsigned int	Array<T>::size() {
	return (this->s);
}