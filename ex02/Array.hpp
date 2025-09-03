/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 21:07:04 by dcastor           #+#    #+#             */
/*   Updated: 2025/09/03 10:45:10 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstdlib>
#include <exception>

template <typename T>
class Array
{
private:
	T *_elements;
	unsigned int _size;

public:
	// Canonical Form
	Array(const Array &src);
	Array &operator=(const Array &src);
	~Array();

	// Customs Constructors
	Array();
	Array(unsigned int size);

	// Overloads
	T &operator[](unsigned int position);

	// Exceptions
	class OutOfBoundsException : public std::exception
	{
		virtual const char *what() const throw();
	};

	// Member Functions
	unsigned int size() const;
};

#include "Array.tpp"
