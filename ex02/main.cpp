/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:12:16 by orakib            #+#    #+#             */
/*   Updated: 2023/09/26 18:15:23 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"

int	main(void) {
	try
	{
		Array<int>	arr1;
		Array<int>	arr2(5);

		arr2[0] = 0;
		arr2[1] = 1;
		arr2[2] = 2;
		arr2[3] = 3;
		arr2[4] = 4;
		std::cout << arr2[0] << std::endl;
		std::cout << arr2[1] << std::endl;
		std::cout << arr2[2] << std::endl;
		std::cout << arr2[3] << std::endl;
		std::cout << arr2[4] << std::endl;
		std::cout << arr1[4] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Array<std::string>	arr1;
		Array<std::string>	arr2(5);

		arr2[0] = "jack";
		arr2[1] = "marlize";
		arr2[2] = "barry";
		arr2[3] = "mike";
		arr2[4] = "jade";
		std::cout << arr2[0] << std::endl;
		std::cout << arr2[1] << std::endl;
		std::cout << arr2[2] << std::endl;
		std::cout << arr2[3] << std::endl;
		std::cout << arr2[4] << std::endl;
		std::cout << arr2[5] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
}