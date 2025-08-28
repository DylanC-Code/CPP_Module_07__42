/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 11:18:57 by dcastor           #+#    #+#             */
/*   Updated: 2025/08/28 11:41:04 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>

template <typename Arr, typename Func>
void iter(Arr *arr, size_t len, Func);

template <typename Arr, typename Func>
void iter(const Arr *arr, size_t len, Func);

#endif
