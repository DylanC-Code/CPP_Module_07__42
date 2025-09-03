/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 21:10:00 by dcastor           #+#    #+#             */
/*   Updated: 2025/09/03 10:47:00 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#include "iostream"

int main()
{
	Array<unsigned int> a(5), b, c(10);

	std::cout << "a[2] = " << a[2] << std::endl;

	a[2] = 3;

	std::cout << "a[2] = " << a[2] << std::endl;

	try
	{
		a[5];
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	b = a;

	b[2] = 10;

	std::cout << "b[2] = " << b[2] << std::endl;
	std::cout << "a[2] = " << a[2] << std::endl;

	std::cout << "Size of a = " << a.size() << std::endl;
	std::cout << "Size of b = " << b.size() << std::endl;
	std::cout << "Size of c = " << c.size() << std::endl;

	return 0;
}
