/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 11:18:43 by dcastor           #+#    #+#             */
/*   Updated: 2025/09/03 10:52:03 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void increment(int &x)
{
	x += 1;
}

void printer(const int &c)
{
	std::cout << c << " ";
}

int main()
{
	int arr[] = {0, 1, 2, 3, 4};
	iter(arr, 5, &increment);
	for (size_t i = 0; i < 5; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
	const int arr2[] = {10, 1, 2, 3, 40};
	iter(arr2, 5, &printer);
	return 0;
}
