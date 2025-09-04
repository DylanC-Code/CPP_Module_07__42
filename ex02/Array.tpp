/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 10:11:46 by dcastor           #+#    #+#             */
/*   Updated: 2025/09/04 22:18:17 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

//  Canonical Form

template <typename T>
Array<T>::Array(const Array &src) : _elements(0), _size(0)
{
	(*this) = src;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &src)
{
	if (this == &src)
		return (*this);

	delete[] this->_elements;
	this->_size = src._size;
	this->_elements = new T[this->_size]();

	for (ssize_t i = 0; i < this->_size; i++)
		this->_elements[i] = src._elements[i];

	return (*this);
}

template <typename T>
Array<T>::~Array()
{
	delete[] this->_elements;
}

// Custom Constructors

template <typename T>
Array<T>::Array() : _elements(0), _size(0)
{
	this->_elements = new T[0]();
}

template <typename T>
Array<T>::Array(unsigned int size) : _elements(0), _size(size)
{
	this->_elements = new T[size]();
}

// Overloads

template <typename T>
T &Array<T>::operator[](unsigned int position)
{
	if (position > this->_size - 1)
		throw OutOfBoundsException();
	return this->_elements[position];
}

template <typename T>
const char *Array<T>::OutOfBoundsException::what() const throw()
{
	return "Error: position is out of bounds!\n";
}

// Member Functions

template <typename T>
unsigned int Array<T>::size() const
{
	return this->_size;
}
