/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 11:18:43 by dcastor           #+#    #+#             */
/*   Updated: 2025/08/28 11:58:28 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template <typename Arr, typename Func>
void iter(Arr *arr, size_t len, Func func)
{
	for (size_t i = 0; i < len; i++)
		func(arr[i]);
}

template <typename Arr, typename Func>
void iter(const Arr *arr, size_t len, Func func)
{
	for (size_t i = 0; i < len; i++)
		func(arr[i]);
}

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
