/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:32:20 by orakib            #+#    #+#             */
/*   Updated: 2023/09/26 15:01:48 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void) {
	int			int_arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	char		char_arr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l'};
	std::string	str_arr[] = {"hello", "world", "!"};

	::iter(int_arr, 10, ::func);
	std::cout << std::endl;
	::iter(char_arr, 12, ::func);
	std::cout << std::endl;
	::iter(str_arr, 3, ::func);
	std::cout << std::endl;
}